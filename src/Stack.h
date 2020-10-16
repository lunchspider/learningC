#ifndef STACK_H
#define STACK_H
#include<stdlib.h>
#include<string.h>
// a generic stack implementation written in c
// by www.github.com/lunchspider

typedef struct Stack Stack;

struct Stack{
  void *data;
  size_t sizeofdata;
  Stack* next;
  Stack* prev;
};

Stack* createStack(const size_t );

void pushStack(Stack * ,const void *,const size_t);

void popStack(Stack *);
#endif
