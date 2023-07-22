#include <stdio.h>

int staticfun(void)
{
    // use static keyword for make static variable;
    static int a = 0;
    printf("Static variable %d\n", a);
    a++;
    return a;
}

int main()
{
    // static variable hold the value upto till end of the program;
    for (int i = 0; i < 20; i++)
    {
        staticfun();
    }

    return 0;
}