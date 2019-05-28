#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(int argc, const char * argv[])
{
    typedef int(*fun)(int);
    fun f = add;
    int ret = f(20);

    return 0;
}
