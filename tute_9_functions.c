// gcc tute_9_functions.c -o tute_9_functions.exe && tute_9_functions.exe
#include <stdio.h>


// function prototype or definaction
void add(int a, int b);

int main(int argc, char const *argv[])
{
    // To create User Define Function Name
    int a, b;
    printf("Enter Your a :\n");
    scanf("%d", &a);
    printf("Enter Your b :\n");
    scanf("%d", &b);
    // function call
    add(a,b);

    return 0;
}

// function decleration
void add(int a, int b)
{
    printf("The Sum %d and %d Is :%d\n",a,b, a + b);
}
