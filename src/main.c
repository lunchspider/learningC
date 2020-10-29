#include"Stack.h"
#include<stdio.h>
int main() 
{
  Stack* s = createStack(100);
  printf("size of stack is %zu\n", lenStack(s));
  freeStack(s);
  return 0;
} 
