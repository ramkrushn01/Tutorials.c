#include <stdio.h>
#include <time.h>

void sort(int *arr, int len)
{
    int temp, a = 0, lenght = len / 2;
    while (a < lenght)
    {

        for (int i = 0; i < len - 1; i++)

        {

            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }

            // printf("%d ", arr[i]);
        }
        // printf("%d\n",arr[len-1]);
        a++;
    }
}

int main()
{
    clock_t t;
    int arr[] = {85, 8, 9, 7, 2, 1, 53, 3, 4, 5, 6, 23, 14, 18, 80, 20, 72, 40, 10, 60, 52};

    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, len);

    printf("lenght of arr is %d\n", len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}