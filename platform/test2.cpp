// Desc: test const

#include <stdio.h>

int main()
{
	char src[10];
	 //char* src  = "hello";
    char  *p = src;
 	*p='t'; 
 
	//note: %p is eval to %x
    printf("src=%p\n", src);
    printf("src=%x\n", src);
    printf("src=%p\n", p);
    return 0;
}
