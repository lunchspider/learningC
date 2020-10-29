#include "Stack.h"

#undef createStack

Stack* (createStack)()
{
  Stack* s = (Stack*) malloc(sizeof(Stack));
  s->data = NULL;
  s->next = NULL;
  s->prev = NULL;
  return s;
}

Stack* createStackLen(size_t len)
{
  Stack* ReturnStack = createStack();
  Stack* GarbStack = ReturnStack;
  while(len){
    Stack* GarbStack2 = createStack();
    GarbStack2->prev = GarbStack;
    GarbStack->next   = GarbStack2;
    GarbStack  = GarbStack2;
    --len;
  }
  return ReturnStack;
}

void (pushStack)
(Stack *s, const void *data,const size_t size)
{
  while(s->data){
    // going to the end of the stack
    // where data is null
    s = s->next;
  }
  s->data = (void*) malloc(size);
  s->sizeofdata = size;
  // copying data into the last node
  memcpy(s->data, data, size);
  if(s->next == NULL){
    // extending last node
    Stack *newnode = createStack();
    newnode->prev = s;
    s->next = newnode;
  }
}

void popStack
(Stack *s, void* element)
{
  while(s->next->data){
    // going to the end of the stack where the 
    // data is NULL
    s = s->next;
  }
  memcpy(element, s->data, s->sizeofdata);
  free(s->data);
  s->data = NULL;
}

size_t lenStack(Stack *s)
{
  size_t lenOfStack = 0;
  Stack* garbPtr = s->prev;
  while(garbPtr){
    lenOfStack++;
    garbPtr = garbPtr->prev;
  }
  garbPtr = s->next;
  while(garbPtr->data){
    lenOfStack++;
    garbPtr = garbPtr->next;
  }
  return ++lenOfStack;
}

void freeStack
(Stack *s)
{
  Stack* garb = s->prev;
  Stack* garb2;
  while(garb){
    // freeing all the stack nodes previous to the given element
    if (garb->data) {
      // since in poping a element the data is set to NULL
      // if data is not null we will free  it
      free(garb->data);
    }
    garb2 = garb->prev;
    free(garb);
    garb = garb2;
  }
  garb = s;
  while(garb){
    if (garb->data) free(garb->data);
    garb2 = garb->next;
    free(garb);
    garb = garb2;
  }
}
