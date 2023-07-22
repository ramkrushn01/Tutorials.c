#include <stdio.h>
#include <string.h>

struct student
{
    int rollNo;
    int marks;
    char name[30];
} // global structure varialbles
ganesh,
    umesh;

// global structure varialbles
struct student abhishek, sharad;

int main()
{
    // local structure variables
    struct student ram, manoj;
    ram.rollNo = 1;
    ram.marks = 85;
    strcpy(ram.name, "Ramkrushn Bharat Salunkhe");

    manoj.rollNo = 2;
    manoj.marks = 82;
    strcpy(manoj.name, "Manoj Navanath Bhosale");

    printf("%d) %s %d\n",ram.rollNo,ram.name,ram.marks);
    printf("%d) %s %d\n",manoj.rollNo,manoj.name,manoj.marks);
    
    scanf("%c");

    return 0;
}