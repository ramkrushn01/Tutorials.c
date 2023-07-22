// it was run by using gcc tute_5_Loops.c -o tute_5_Loops.exe -std=c99
#include <stdio.h>

int main()
{
    //for loop in c
    printf("\n I am a for loop\n\n");
    for (int i = 0; i < 100; i++)
    {
        printf("I am for loop %d\n", i);
    }

    // while loop
    printf("\n I am a while loop\n\n");
    int w;
    while (w < 100)
    {
        printf("I am a while loop :%d\n", w);
        w++;
    }

    // do while loop
    printf("\n I am a do-while loop\n\n");
    int d;
    do
    {
        printf("I am A doWhile: %d\n", d);
        d++;
    } while (d < 3);

    return 0;
}
