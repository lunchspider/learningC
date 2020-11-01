// a generic doubly linked list implementation written in c
// by www.github.com/lunchspider

#ifndef LIST_H
#define LIST_H
#include<stdlib.h>

typedef struct List List;

struct List{
  void *data;
  size_t sizeofdata;
  List* next;
  List* prev;
};

List* createList();

size_t lenList(List *s);

#endif
