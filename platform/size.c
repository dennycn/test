#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/select.h>

typedef struct _str_type
{
  int len;
  char _s[1];
}str_type;

int fun(char str[100])
{
  return sizeof(str);
}

typedef struct { int a; char b; short c; }A; 
typedef struct { char b; short c; int a; }B;
typedef struct { char b; int a; short c; }C;
//8, 8, 12

struct BBB
{
	long num;	//4
	char *name;	//4
	short int data;	//2
	char ha;	//1 + [1]
	short ba[5];	//2*5 + [2]
}*p;

struct s1{
short a;	//2 
long b;	//4
};	//2+ [2] + 4 =8
struct s2{
char c;	//1 
struct s1 d;	//8
long long e;	//8
};	//1+[3] + 8 + 8 = 20


int main()
{
//test 1: point add
   p=0x1000000;
   printf("sizeof(BBB)=%d\n", sizeof(*p) );
   printf("p+0x200=%x\n", p+0x200);		//ox1000000 + 0x200*24
   printf("p+0x200=%x\n", (long)p+0x200);	//num add
   printf("p+0x200=%x\n\n", (char*)p+0x200);	//point add, char=1, short=2

//test 2: strucxt
  printf("sizeof(A,B,C)=%d,%d,%d\n", sizeof(A),sizeof(B),sizeof(C));
  //printf("%x\n\n", &A.a);

//test 3: structs
  printf("s1=%d, s2=%d\n\n", sizeof(struct s1), sizeof(struct s2));

  int str_len = 5;
  str_type *s= (str_type*)malloc(sizeof(str_type) + str_len -1);
  printf("str_type stuct %d\n", sizeof(str_type));
  printf("s=%d\n", sizeof(s));  

  free(s);
  printf("-%d\n", sizeof(fd_set) );
  printf("-%d\n", FD_SETSIZE );

//test: sizeof and strlen to count string
  char str[10]="hello";
  printf("const str[] sizeof=%d,strlen=%d\n\n", sizeof(str),strlen(str));

//test: function argument
  char str2[10];
  printf("sizeof=%d\n", fun(str2));

  return 0;
}
