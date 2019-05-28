#include <iostream>
#include <typeinfo>
 
struct S { // The type has to be polymorphic
    virtual void f();
}; 
 
int main()
{
    S* p = NULL;
    std::cout << typeid(*p).name() << '\n';
}
