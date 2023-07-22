#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num;
    int chr = 30;
    int fchr = 32;
    printf("Enter Your Number For Pattern Printing: ");
    scanf("%d",&num);
    printf("Enter First Character chr: ");
    // scanf("%d",&fchr);
    printf("Enter Second Character chr: ");
    // scanf("%d",&chr);

    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > 0; j--)
        {
            if (j>i)
            {
                printf("%c",fchr);
            }
            else{
                printf("%c",chr);
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}
