// gcc tute_8_typeCasting.c -o tute_8_typeCasting && tute_8_typeCasting.exe

#include <stdio.h>

int main(int argc, char const *argv[])
{

    // the basic syntex is : (type) value;

    int a;
    a = 63;
    float b = a / 5;
    printf("The Values is %f\n", b);
    b = (float)a / 5;
    printf("The Values is %f\n", b);

    return 0;
}
