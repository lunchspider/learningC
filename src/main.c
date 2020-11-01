#include"Stack.h"
#include<stdio.h>
int main() 
{
  Stack* s = createStack();
  size_t arr[12333];
  size_t anotherarray[12333];
  size_t lenofarr = sizeof(arr) / sizeof(size_t);
  for(size_t i = lenofarr ; i ; --i){
    arr[i] = i;
  }
  pushStack(s, arr);
  popStack(s, anotherarray);
  freeStack(s);
  return 0;
} 
