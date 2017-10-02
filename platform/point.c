#include <stdio.h>

void test_1();
void test_2();

void test_1()
{
  int a[4]={5,7,9,11};
  *a = 12;
  //int * const a = (int*)0xbf8cfa24;
  //*a = 5;
  printf("value a=[%p]\n", a);
  printf("value *a=[%d]\n", *a);
  printf("value &a=[%p]\n", &a);
  printf("value a=[%d]\n", &a);

}

void test_2()
{
	char src[10];
	//char* src  = "hello";
	char  *p = src;
	*p='t'; 
 
	//note: %p is eval to %x
    printf("src=%p\n", src);
    printf("src=%x\n", src);
    printf("src=%p\n", p);
}


int main()
{
	test_1();
	test_2();
  
	return 0;
}
