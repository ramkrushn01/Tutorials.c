
#include <stdio.h>

int main()
{
    // pointer arithmatics
    int a = 10;
    int *ptra = &a;
    printf("%d\n", ptra);
    // here is value int size is 4 then addres will be add +4 to previes
    printf("%d\n", ptra + 1);
    // arrays arithmatics

    int arr[10] = {0, 1, 2, 3, 6, 4, 8, 1, 10};
    int *ptrarr = arr;
    printf("the value of arr first elements is %d\n", *arr);   // same statement
    printf("the value of arr first elements is %d\n", arr[0]); // same stement
    printf("the value of arr second elements is %d\n", *arr + 1);
    printf("the value of arr third elements is %d\n", *arr + 2);
    // arr++ it is not valid statement
    ptrarr++;
    printf("%d\n",*ptrarr);
    

    return 0;
}
