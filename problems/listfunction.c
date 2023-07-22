#include <stdio.h>
#include <stdlib.h>

int len(int *arr)
{

    int LenOfarr = 0;

    while (arr[LenOfarr] != '\0')
    {
        LenOfarr++;
    }

    LenOfarr = LenOfarr;

    return LenOfarr;
}

void reverse(int *arr)
{
    int temp, lenOfarr, len_k;
    lenOfarr = len(arr) - 1;
    for (int i = 0; i < (int)lenOfarr / 2; i++)
    {
        len_k = lenOfarr - i;
        temp = arr[i];
        arr[i] = arr[len_k];
        arr[len_k] = temp;
    }
}

void sort(int *arr)
{
    int temp;
    for (int i = 0; i < len(arr); i++)
    {
        for (int j = 0; j < len(arr); j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            // printf("%d ", arr[j]);
        }

        // printf("\n");
    }
    reverse(arr);
}

void arrprint(int *arr)
{
    for (int i = 0; i < len(arr); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {7, 2, 3, 5, 8, 1, 6, 4};
    sort(arr);

    for (int i = 0; i < len(arr); i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nreverce is :\n");

    reverse(arr);

    for (int i = 0; i <= len(arr); i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nnew array\n");
    int ptr[] = {20,36,85,2,56,325,225,20,25,41,8,6,32,50};
    printf("%d\n",len(ptr));

    arrprint(ptr);
    sort(ptr);
    arrprint(ptr);
    printf("size of arr is %d",sizeof(ptr)/sizeof(ptr[0]));
    

    return 0;
}
