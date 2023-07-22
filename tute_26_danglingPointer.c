#include <stdio.h>
#include <stdlib.h>

int *danglingPointer(void)
{
    float PI = 3.14;
    return &PI;
}

int main()
{
    // dangling pointer from funtions
    // float *ptr = danglingPointer();
    // printf("PI = %f", *ptr);

    // dangling pointer from dynamic memory allocations
    int* mptr = NULL;
    mptr = (int*)malloc(3*sizeof(int));
    mptr[0] = 10;
    printf("i am not dangling upto\n");
    free(mptr);
    printf("i am a mptr dangling now!\n");

    int *blockPtr;
    {
        int ab = 60;
        blockPtr = &ab;
        printf("i am blockPtr value of ab %d\n",*blockPtr);
    }
    // blockPtr = NULL;
    printf("I am dangling now %d",*blockPtr);


    return 0;
}