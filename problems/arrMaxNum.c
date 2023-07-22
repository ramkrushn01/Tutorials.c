#include <stdio.h>

int max(int *arr, int len)
{
    int temp, length = len - 1;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
    return arr[length];
}

int main()
{
    int arr[] = {10, 8, 9, 7, 2, 1, 10, 3, 4, 5, 6, 10, 5, 8, 80, 20, 10, 40, 85, 60, 52};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("maximum number is %d", max(arr, len));

    return 0;
}