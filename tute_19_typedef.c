#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int regno;
    char job[10];
    char name[30];
} emp;

int main()
{

    // first method
    emp ram, maonj;

    // second method
    typedef struct employee empMitra;

    // this is also valid
    struct employee umesh;

    // other use of typedef
    // for poiter variable
    int * c,d;

    // use this is valid syntex
    typedef int *intptr;
    int b = 20;
    intptr a = NULL;

    // ram.regno = 2;
    // strcpy(ram.job, "MD");
    // strcpy(ram.name, "Ramkrushn Bharat Salunkhe");

    // maonj.regno = 3;
    // strcpy(maonj.job, "PH");
    // strcpy(maonj.name, "Manoj Navanath Bhosale");

    return 0;
}