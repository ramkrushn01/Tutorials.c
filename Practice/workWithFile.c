#include <stdio.h>

int calculator(int a, int b)
{
    return a + b;
}

int main(int argc, int argv[])
{
    int a = (int)argv[1];
    int b = (int)argv[2];

    int sum = calculator(a,b);
    printf("sum is %d \n", sum);

    return 0;
}
