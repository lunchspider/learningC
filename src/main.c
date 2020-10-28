#include"Stack.h"
#include<stdio.h>
int main() 
{
  Stack* s = createStack();
  size_t x;
  for(size_t i = 0 ; i < 1000 ; ++i){
    pushStack(s, &i);
  }
  popStack(s, &x);
  printf("size of stack is %zu\n", lenStack(s));
  freeStack(s);
  return 0;
} 
