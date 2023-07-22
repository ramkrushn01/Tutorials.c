#include <stdio.h>

int main()
{
    int num = 123;
    int *ptr;
    printf("Memory address of num = %p\n", &num);
    printf("Now, read/input the memory address :");
    scanf("%p", &ptr);

    printf("Memory address is: %p and its value is: %d\n", ptr, *ptr);

    return 0;
}