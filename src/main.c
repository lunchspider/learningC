#include"Stack.h"
#include<stdio.h>
int main() 
{
  Stack* s = createStack();
  int x = 5;
  pushStack(s, &x);
  pushStack(s, &x);
  pushStack(s, &x);
  pushStack(s, &x);
  printf("size of stack is %zu\n", lenStack(s));
  freeStack(s);
  return 0;
} 
