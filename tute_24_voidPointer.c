#include <stdio.h>

int main()
{
    // void pointer
    void *name;
    name = (char *)"ramkrushn";
    printf("name is %s\n", (char *)name);

    // void pointer second example
    void *num;
    int a = 20;
    num = (int *)&a;
    printf("void pointer number is %d\n", *((int *)num));

    // void pointer for arr
    void *Myname;
    char myName[] = "Ramkrushn";
    Myname = myName;
    printf("my name is (void pointer)%s\n", (char *)Myname);

    return 0;
}