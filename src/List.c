#include"List.h"
// internal function for creating list
List* list_init()
{
  List* newlist = malloc(sizeof(List));
  newlist->data = NULL;
  newlist->next = NULL;
  newlist->prev = NULL;
  return newlist; 
}

List* createList()
{
  List* newlist = list_init();
  List* nodeforstoringlen = list_init();
  newlist->prev = nodeforstoringlen;
  nodeforstoringlen->next = newlist;
  size_t len = (size_t) malloc(sizeof(size_t));
  nodeforstoringlen->data = &len;
  return newlist;
}

size_t lenList
(List *s)
{
  size_t len;
  return len;
}
