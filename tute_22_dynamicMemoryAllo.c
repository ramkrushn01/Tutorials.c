#include <stdio.h>
// it is for dynamic memory allocation functions malloc, calloc, realloc, free;
#include <stdlib.h>

int main()
{
    int *mptr = NULL;
    // dynamic mmemory allocation "malloc function"
    mptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        mptr[i] = i;
    }
    // free memory at mptr
    free(mptr);

    int *Cptr = NULL;
    Cptr = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        Cptr[i] = i;
    }
    // free memory of Cptr
    // free(Cptr);

    // realloc of memory
    (int *)realloc(Cptr, 10 * sizeof(int));

    // free the realloc memory
    free(Cptr);

    // for free heap memory

    return 0;
}