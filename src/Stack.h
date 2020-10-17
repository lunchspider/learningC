// a generic stack implementation written in c
// by www.github.com/lunchspider

#ifndef STACK_H
#define STACK_H
#include<stdlib.h>
#include<string.h>

#define pushStack(X,Y) pushStack(X, Y, sizeof(Y))

typedef struct Stack Stack;

struct Stack{
  void *data;
  size_t sizeofdata;
  Stack* next;
  Stack* prev;
};

Stack* createStack();

void (pushStack)(Stack * ,const void *,const size_t);

void popStack(Stack *, void *);

size_t lenStack(Stack *);

void freeStack(Stack *);
#endif
