#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter Your Age: \n");
    scanf("%d", &age);
    switch (age)
    {
    case 13:
        printf("You are 13 years older\n");
        break;
    case 15:
        printf("You are 15 years older\n");
        break;
    case 17:
        printf("You are 17 years older\n");
        break;

    default:
        printf("your not a In age \n");
    }

    return 0;
}
