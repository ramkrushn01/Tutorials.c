#include <stdio.h>

// call by value
void call_by_Value(int a, int b)
{
    printf("the sum of %d and %d is %d\n", a, b, a + b);
}

// call by reference
// value swapping function
void call_by_ref(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    a = 30;
    b = 40;
    // Call by Value funcion
    call_by_Value(a, b);

    // call by reference
    printf("The a and b is %d, %d\n", a, b);
    call_by_ref(&a, &b);
    printf("the swapping value a and b is %d,%d\n", a, b);

    return 0;
}