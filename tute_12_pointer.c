#include <stdio.h>

int main()
{
    int a;
    a = 102;
    int *b = &a;

    // print pointer memory location in int
    printf("%d\n", b);
    // print pointer memory location in hexadecimel
    printf("%x\n", b);
    // print pointer memory location in pointer
    printf("%p\n", b);


    
    // pointer location in pointer b
    printf("%d\n",&(*b));

    // value of a is point b
    printf("%d\n", *b);

    return 0;
}