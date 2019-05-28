#include<stdio.h>

int max(int x,int y){return (x>y? x:y);}

struct A {
  int num1;
  int num2;
};

int main()
{
    struct A (*ptr)(int, int);
    int a= 10;
    int b= 20;
    struct A c;
    ptr = max;
    c = (*ptr)(a,b);//未检出传入参数类型不正确
    return 0;
}
