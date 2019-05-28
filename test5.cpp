#include <iostream>
#include <typeinfo>
 
struct Foo { virtual ~Foo() {} };
struct Bar { virtual ~Bar() {} };
 
int main()
{
    Bar b;
    Foo* f = dynamic_cast<Foo*>(&b);
}
