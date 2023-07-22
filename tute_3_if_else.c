#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter Your Age: \n");
    scanf("%d", &age);

    if(age<18){
        printf("You can not be drive A Car\n");
    }
    else if (age>=18 && age<60)
    {
        printf("You can drive A Car\n");
    }
    else{
        printf("Your are Respective person\n");
    }
    

    return 0;
}
