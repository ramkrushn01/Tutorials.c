#include <stdio.h>

int main()
{
    char a;

    int num = 3000;
    for (int i = 0; i < num * 3; i++)
    {
        if (i < num)
        {
            printf("\e[38;5;208m");
        }
        else if (i > num && i < num * 2)
        {
            printf("\e[38;5;34m");
        }
        else if (i > num * 2)
        {
            printf("\e[38;5;231m");
        }

        printf("%c", 219);
    }
    printf("\e[0m");

    return 0;
}