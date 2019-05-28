#include<stdio.h>

class Base
{
  public:
    virtual void foo()=0; //(warning) Call of pure virtual function 'foo' in constructor.
    void bar() {
    foo();
    }
    Base()   { bar();  }
};

class Derived: Base
{
  public:
    void foo() {  }
};

int main()
{
    Derived d;
}
