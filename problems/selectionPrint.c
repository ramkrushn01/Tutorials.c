#include <stdio.h>

void algo(int *arr, int len)
{
    int temp;
    int arr2[len][len];
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            for (int k = 0; k < len; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int arr[] = {6,1,0,2,5,8,6,2,2,7,10,6,1,0,2,5,8,6,2,2,7,10};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("i am len %d\n", len);
    algo(arr, len);

    return 0;
}