#ifndef STRINGS_H
#define STRINGS_H
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define string_init(X) _Generic((X) ,                \
  char *: string_init_char((X), strlen((X))),        \
  default: string_init_len((X))                      \
)

typedef struct string string;

struct string
{
  char *arr;
  size_t len;
};

string string_init_len(size_t);

string string_init_char(char *, size_t);

void string_append(string *, string *);


void free_string(string *);

void free_all_strings();
#endif
