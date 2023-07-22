#include <stdio.h>
#include "conic.c"

int calculator(int *a, int *b,const char *c)
{
    if (*c == '+')
    {
        return *a + *b;
    }
    else if (*c=='-'){
        return *a-*b;
    }
    else if (*c=='*')
    {
        return *a * *b;
    }
    else if (*c=='/')
    {
        return *a / *b;
    }
    else{
        red();
        printf("Try Again :\n");
        reset();
        return 0;
    }
    
    
}

int main(int argc, char const *argv[])
{
    int a;
    int b;
    // char act;

    printf("Enter Your First Number :\n");
    scanf("%d", &a);

    printf("Your Action :\n");
    char act = getche();
    

    printf("\nEnter Your Second Number :\n");
    scanf("%d", &b);

    int finalans = calculator(&a, &b, &act);
    
    green();
    printf("Ans Is %d %c %d is %d\n",a,act,b,finalans);
    reset();

    return 0;
}
