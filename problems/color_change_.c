#include <stdio.h>

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

int main(int argc, char const *argv[])
{

    if (argv[1] == NULL)
    {
        printf("use h -help\n%s0)Normal\n%s1)Red\n%s2)Green\n%s3)Yellow\n%s4)Blue\n%s5)Purple\n%s6)Cyan\n%s7)White", KNRM, KRED, KGRN, KYEL, KBLU, KMAG, KCYN, KWHT);
        return 0;   
    }
    
    printf("%s", argv[1]);

    char help[] = "use h -help\n%s0)Normal\n%s1)Red\n%s2)Green\n%s3)Yellow\n%s4)Blue\n%s5)Purple\n%s6)Cyan\n%s7)White";
    int color = (int)argv[1][0];

    if (argv[1] == "help" || argv[1] == "--help" || argv[1] == "/?" || argv[1] == "-h")
    {
        printf("use h -help\n%s0)Normal\n%s1)Red\n%s2)Green\n%s3)Yellow\n%s4)Blue\n%s5)Purple\n%s6)Cyan\n%s7)White", KNRM, KRED, KGRN, KYEL, KBLU, KMAG, KCYN, KWHT);
        return 0;
    }

    else
    {
        switch (color)
        {
        case 48:
            printf("%s", KNRM);
            break;

        case 49:
            printf("%s", KRED);
            break;

        case 50:
            printf("%s", KGRN);
            break;

        case 51:
            printf("%s", KYEL);
            break;

        case 52:
            printf("%s", KBLU);
            break;

        case 53:
            printf("%s", KMAG);
            break;

        case 54:
            printf("%s", KCYN);
            break;

        case 55:
            printf("%s", KWHT);
            break;

        case 104:
            printf("use h -help\n\n%s0)Normal\n%s1)Red\n%s2)Green\n%s3)Yellow\n%s4)Blue\n%s5)Purple\n%s6)Cyan\n%s7)White", KNRM, KRED, KGRN, KYEL, KBLU, KMAG, KCYN, KWHT);
            break;

        default:
            printf("Enter Valid Color Name%s", KNRM);
        }
    }

    return 0;
}
