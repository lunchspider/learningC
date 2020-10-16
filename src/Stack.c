#include "Stack.h"
#include<string.h>
Stack* createStack
  (const size_t __intialsize)
{
  Stack **s = (Stack**) malloc(sizeof(Stack) * __intialsize);
  (s[0])->data = NULL;
  (s[0])->prev = NULL;
  (s[0])->next = s[1];
  for(size_t i = 1 ; i < __intialsize - 1; ++i){
    (s[i])->data = NULL;
    (s[i])->next = (s[i+1]);
    (s[i])->prev = (s[i-1]);
  }
  (s[__intialsize])->data = NULL; (s[__intialsize])->next = NULL;
  (s[__intialsize])->prev = (s[__intialsize -1]);
  //returning the starting node
  return s[0];
}

void pushStack
  (Stack *__s, const void *__data,const size_t __size)
{
  while(__s->data){
    // going to the end of the stack
    // where data is not null
    __s = __s->next;
  }
  __s->data = (void*) malloc(__size);
  __s->sizeofdata = __size;
  // copying __data into the last node
  memcpy(__s->data, __data, __size);
  if(__s->next == NULL){
    // extending node
    Stack *__newnode = createStack( 1 );
    __newnode->prev = __s;
    __s->next = __newnode;
  }
}

void popStack
(Stack *__s)
{

}
