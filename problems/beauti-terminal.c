#include <stdio.h>
#include <conio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int main()
{
    printf("%sred\n", KRED);
    printf("%sgreen\n", KGRN);
    printf("%syellow\n", KYEL);
    printf("%sblue\n", KBLU);
    printf("%smagenta\n", KMAG);
    printf("%scyan\n", KCYN);
    printf("%swhite\n", KWHT);
    printf("%snormal\n", KNRM);

    for (int i = 0; i < 1000; i++)
    {
        printf("%d \x1B[%dm%s\n",i,i,"ramkrushn");
        char a = getch();
        if (a == 'x')
        {
            break;
        }
    }
    

    printf("%s",KNRM);
    

    return 0;
}