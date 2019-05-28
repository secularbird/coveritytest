#include<stdio.h>

int max(int x,int y){return (x>y? x:y);}

int main()
{
    int (*ptr)(int);
    int a=1;
    int d=0;
    ptr = max;
    d = (*ptr)(a); //error: too many arguments to function
    printf("max=%d", d);
    return 0;
}
