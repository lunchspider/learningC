#include"String.h"

string string_init_len
(size_t __len__)
{
  string s = {
    .arr = (char*) malloc(__len__ + 1),
    .len = __len__
  };
  return s;
}


string string_init_char
(char *arr, size_t len)
{
  if(arr[len] == '\0') --len;
  string s = string_init_len(len);
  for(size_t i = 0; i <=len; ++i){
    s.arr[i] = arr[i];
  }
  return s;
}


void string_append
(string *__first, string *__second)
{
  size_t _new_len = __first->len + __second->len + 1;
  __first->arr  = realloc(__first->arr, _new_len);
  for(size_t i = __first->len + 1 ; i <= _new_len ; ++i){
    __first->arr[i] = __second->arr[ i - __first->len - 1];
  }
  __first->len = _new_len;
}

void free_string
(string *s)
{
  free(s->arr);
}
