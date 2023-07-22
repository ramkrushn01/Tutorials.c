#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "conic.c"

int main()
{

    for (int h = 0; h < 60; h++)
    {
        printf(":%d",h);
        for (int m = 0; m < 60; m++)
        {
            printf(":%d",m);
            for (int s = 0; s < 60; s++)
            {
                printf(":%d",s);
                for (int ms = 0; ms < 100; ms++)
                {
                    // gotoxy(8,0);
                    printf(":%d",ms);
                    
                }
            }
        }
    }

    return 0;
}