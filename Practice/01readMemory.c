#include <stdio.h>
#include <conio.h>

int main()
{
    int b = 35;
    void *ptr = &b;
    printf("%p\n", ptr);
    sleep(100);

    return 0;
}