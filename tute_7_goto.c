// gcc tute_7_goto.c -o tute_7_goto.exe -std=c99
#include <stdio.h>

int main()
{
    int marks;
    for (int i = 0; i < 30; i++)
    {
        printf("Enter Your 10th Marks: \n");
        scanf("%d", marks);
        printf("%d", marks);
        if (marks > 80)
        {
            goto end;
        }
        else
        {
            printf("Are You Serius Now !\n");
        }
    }
end:
    printf("You are pass\n");

    return 0;
}
