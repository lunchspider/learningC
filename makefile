CC=cc
OPTION=-g

all : main.o String.o Stack.o
	$(CC) bin/main.o bin/String.o bin/Stack.o ${OPTION} -o main

main.o: src/main.c src/String.h
	$(CC) -I. -c src/main.c -o bin/main.o

String.o: src/String.c src/String.h
	$(CC) -I. -c src/String.c -o bin/String.o

Stack.o : src/Stack.c src/Stack.h
	$(CC) -I. -c src/Stack.c -o bin/Stack.o

clean:
	rm  bin/*
	rm main
