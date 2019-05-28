#include <iostream>

using namespace std;

class A {
  public:
  void func() { this->hello();}
  void hello() {
    cout<<"hello world"<<this->member<<endl;
  }
  public:
    int member;
};

int main(int argc, const char *argv[])
{
  class A *a = NULL;
  a->func();
  cout<<a->member<<endl;
  return 0;
}
