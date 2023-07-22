#include <stdio.h>
#include <string.h>
// #include <conio.h>
#include "conic.c"

int main()
{
    clear();

    char name[200];
    printf("Enter Your Name \n");
    cyan();
    gotoxy(1,10);
    printf(
        "--------------------------------------------------------------\n"
        "                                                             \n"
        "--------------------------------------------------------------\n");

    gotoxy(3,11);
    green();
    gets(name);
    reset();

    getch();
    clear();
    return 0;
}