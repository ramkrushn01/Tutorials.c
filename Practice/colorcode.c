#include <stdio.h>

int main()
{
    for (short int r = 0; r < 255; r++)
    {
        for (short int g = 0; g < 255; g++)
        {
            for (short int b = 0; b < 255; b++)
            {
                printf("\e[38;2;%hd;%hd;%hdm", r,g,b);
                printf("%c",219);
                printf("\e[0m");
                if (b==250)
                {
                    getchar();
                }
                
            }
        }
    }

    return 0;
}