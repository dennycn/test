#include <iostream>

class Base
{
public:
  Base(){}
  ~Base(){}
};

class Sub1 : public Base
{
};

int main()
{
  Base *a = new Base;
  Sub1 *b = (Sub1*)a;
  Base *c = (Base*)b;
  return 0;
}
