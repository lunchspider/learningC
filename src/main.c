#include "String.h"
int main() 
{
  string mystr = string_init("hello");
  string sec = string_init(" world!");
  string hello = string_init(50);
  string_append(&mystr, &sec);
  printf("%s\n",mystr.arr);
  free_string(&mystr);
  free_string(&sec);
  free_string(&hello);
  return 0;
} 
