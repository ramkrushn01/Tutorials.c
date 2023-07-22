#include <stdio.h>

int main()
{
    // it is a wildpointer now
    // unintionlize pointer is a wild pointer

    int *ptr; // it is not recommented for ptr declaration
    int aa = 5420;
    
    ptr = &aa; // i am not a wild pointer right now
    printf("i am not wild now %d\n", *ptr);

    return 0;
}