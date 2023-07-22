// gcc tute_10_recursion.c -o tute_10_recursion.exe && tute_10_recursion.exe

// recursion is self calling function
#include <stdio.h>

int factorial(int num);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter Your Number :\n");
    scanf("%d",&num);
    int fact = factorial(num);
    printf("The Factorial Of %d Is %d",num,fact);
    return 0;
}

int factorial(int num){
    if (num==0 || num==1){
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
    
}
