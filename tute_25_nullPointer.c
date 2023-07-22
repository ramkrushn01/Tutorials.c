#include <stdio.h>

int main()
{
    // It is recommented to pointer always initialize with NULL values
    // int *null; avoid this method
    int *null = NULL;
    int a = 10;
    null = &a;
    if (null == NULL)
    {
        printf("I am not null");
    }
    else
    {
        printf("i am note null %d\n", *null);
    }

    return 0;
}