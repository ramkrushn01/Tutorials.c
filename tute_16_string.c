#include <stdio.h>
#include <string.h>

int main()
{
    // arr char teminate by \0
    char name[] = {'r','a','m','\0'};
    printf("name is %s\n",name);

    // double quata string
    char myName[] = "ramkrushn";
    printf("name is %s\n",myName);

    // by using string.h funcions
    puts("ramkrushn is good");

    // by taking user inpput
    char getName[20];
    printf("Enter Your Name :\n");
    gets(getName);
    puts(getName);
    printf("Good Mornning, %s\n",getName);


    return 0;
}