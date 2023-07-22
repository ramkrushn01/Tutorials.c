// gcc tute_6_break_continue.c -o tute_6_break_continue -std=c99
#include <stdio.h>

int main()
{
    // break statement in c

    int age;
    for (int j = 0; j < 10; j++)
    {
        printf("Enter Your Age: \n");
        scanf("%d", &age);
        if (age < 10)
        {
            printf("You Are the kid!\n ");
            break;
        }
        else if (age < 20)
        {
            printf("Your 10th pass\n");
            break;
        }
        else if (age > 30)
        {
            printf("Enter Your gratuate\n");

            break;
        }
        else
        {
            printf("you are in job now\n");
        }
    }

    for (int i = 0; i < 30; i++)
    {
        printf("Enter Your Age:\n ");
        scanf("%d", age);
        if (age < 10)
        {
            printf("Your kid now\n");
            continue;
        }
        else if (age > 20)
        {
            printf("You are not kid : \n You can go now \n");
            continue;
        }
        else
        {
            printf("You are respative person: \n");
            continue;
        }
    }

    return 0;
}
