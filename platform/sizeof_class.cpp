// Desc: test virtual table of c++

#include <iostream>

class Base{
public:
 	Base(){}
	virtual ~Base(){}
	virtual int service(){}

private:
	int a;
};

class Derive1: public Base
{
public:
	Derive1(){}
	~Derive1(){}
	virtual int service(){}	
	virtual int service2(){}	
	virtual int service3(){}

private:
	int aa;
};


int main()
{
  Base* b1 = new Base;

	//Note: 如果BASE类没有数据成员，则大小为4; 
	//sizeof计算class的大小主要是计算数据成员的大小，计算子类要加上父类的数据成员，即使是private。虚函数virtual个数并没有增加类的大小。 
  printf("sizeof(class)=%d\n", sizeof(*b1)); 	//8byte = int a + 4;
  printf("sizeof(son)=%d\n", sizeof(Derive1));	//12byte = int a + 4 + int aa;

  
  return 0;
}
