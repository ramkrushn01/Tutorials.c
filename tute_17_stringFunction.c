#include <stdio.h>
#include <string.h>

int main()
{
    char name[30] = "_ramkrushn";
    char nName[30];

    // copy string function
    strcpy(nName, name);
    printf("\nnew string is :%s\n", nName);

    // string concatination
    printf("\nconcatination of string is %s\n", strcat(name, nName));

    // string length
    printf("\nThe length of string is %d\n", strlen(name));

    // string reverse
    printf("\nRevers string is %s\n", strrev(name));

    // comparision of string
    printf("\ncomparition of string %d\n", strcmp(name, nName));

    return 0;
}