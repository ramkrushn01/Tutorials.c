#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a = 10, i=0;
    int *ptr = &a;
    while (1)
    {
        printf("%d\n", *(ptr++));
        if (i % 99 == 0)
        {
            char c = getch();
            if (c == 'c')
            {
                break;
            }
        }

        i++;
    }

    printf("%d", *(ptr++));
    return 0;
}
