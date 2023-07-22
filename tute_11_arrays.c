#include <stdio.h>

int main()
{
    // one dimentional array
    int upto;
    printf("Enter Your Number for squre :\n");
    scanf("%d", &upto);
    int arr[upto];

    for (int i = 0; i < upto; i++)
    {
        arr[i] = i * i;
    }

    for (int j = 0; j < upto; j++)
    {
        printf("The Squre of %d is %d \n", j, arr[j]);
    }

    // two diamational array in c
    int twoDarr[30][30];
    int kl;
    int xy;
    kl = 10;
    xy = 30;

    // for array initionlizing
    for (int k = 0; k < kl; k++)
    {
        for (int l = 0; l < xy; l++)
        {
            int kf = k;
            if (kf == 0)
            {
                kf == 1;
            }

            twoDarr[k][l] = kf * l;
        }
    }

    // for array printing
    for (int x = 0; x < kl; x++)
    {
        for (int y = 0; y < xy; y++)
        {
            printf("%d * %d is %d \n", x, y, twoDarr[x][y]);
        }
    }

    return 0;
}
