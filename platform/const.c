#include <stdio.h>

int main()
{
  int a[4]={5,7,9,11};
  *a = 12;
  //int * const a = (int*)0xbf8cfa24;
  //*a = 5;
  printf("value a=[%p]\n", a);
  printf("value *a=[%d]\n", *a);
  printf("value &a=[%p]\n", &a);
  printf("value a=[%d]\n", &a);

  
  return 0;
}
