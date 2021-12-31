CC = gcc
SRCDIR = src
OBJDIR = bin
TARGET = main # output binary
# do not edit below this line
SOURCES = $(shell find $(SRCDIR) -type f -name *.c)
OBJECTS = $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SOURCES:.c=.o))
	#Flags, Libraries
	CFLAGS      := -I. -c `pkg-config --cflags gtk4`
	LIB         := -lgmp  `pkg-config --libs gtk4`

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^ $(LIB)

$(OBJDIR)/%.o : $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) -o $@ -c $(CFLAGS) $<

$(OBJDIR) :
	mkdir -p $@

.PHONY : all

run: all
	./main

r: all
	./main

clean:
	rm bin/*
	rm main
