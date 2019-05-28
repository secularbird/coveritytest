#include <iostream>
using namespace std;

class Box
{
  public:
    Box(){;}
    ~Box(){;}
    virtual void printhello() {
      cout << "world" <<endl;
    }
};
class Fox: public Box
{
  public:
    virtual void printhello() {
      cout << "world1" <<endl;
    }
};

class Eox: public Box
{
  public:
    virtual void printhello() {
      cout << "world2" <<endl;
    }
};

int main()
{
  Box* p = new Fox();

  Eox* e = dynamic_cast<Eox *>(p);
  e->printhello();
  return 0;
}
