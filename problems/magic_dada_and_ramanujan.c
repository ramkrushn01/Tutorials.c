#include <stdio.h>
void number(unsigned int num)
{
    for (int i = 1; i < num; i++)
    {
        if (i % 10 == 9 && i % 9 == 8 && i % 8 == 7 && i % 7 == 6 && i % 6 == 5 && i % 5 == 4 && i % 4 == 3 && i % 3 == 2 && i % 2 == 1 && i % 1 == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("\n");

}

void number_(unsigned int num)
{
    for (int i = 1; i < num; i++)
    {

        if (i % 10 == 0 && i % 9 == 0 && i % 8 == 0 && i % 7 == 0 && i % 6 == 0 && i % 5 == 0 && i % 4 == 0 && i % 3 == 0 && i % 2 == 0 && i % 1 == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("\n");
}

int main()
{
    unsigned int num;
    printf("Enter Your Number for it :");
    scanf("%d",&num);

    number(num);

    number_(num);

    return 0;
}