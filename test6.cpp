#include <stdio.h>
#include <iostream>

using namespace std;

class a
{
  public:
    char name;
    int age;
};

int main()
{
    a *var1=NULL;
    a *var2;
    cout << var1->name; //error:request for member ‘a’ in ‘* var1’, which is of non-class type ‘char’
    cout << var2->age; //error:request for member ‘a’ in ‘* var2’, which is of non-class type ‘int’
}
