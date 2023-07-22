#include <stdio.h>

// passing arr
void takeArr(int arr[])
{
    printf("passing arr");
    for (int i = 0; i < 5; i++)
    {
        printf("the Value is %d is %d\n", i, arr[i]);
    }
}

void takeArrAddress(int *arr)
{
    printf("Passing address");
    for (int j=0; j < 5; j++)
    {
        printf("The value is %d and %d is \n", j, *(arr + j));
    }
}

int main()
{
    // passing arr in function by taking array name
    int arr[5] = {10, 20, 30, 40, 50};
    takeArr(arr);

    // passing arr in function by taking address
    takeArrAddress(arr);

    return 0;
}
