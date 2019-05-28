#include<stdio.h>

int max(int x,int y){return (x>y? x:y);}

struct A {
  int num1;
  int num2;
};

int main()
{
    int (*ptr)(struct A, struct A);
    struct A a={10, 20};
    struct A b={10, 20};
    int c;
    ptr = max;
    c = (*ptr)(a,b);//未检出传入参数类型不正确
    printf("max=%d", c);
    return 0;
}
