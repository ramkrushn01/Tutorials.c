#include <stdio.h>
#include "tute_23_testing.c"
/*
Automatic variable(auto,by default )
extern variable
static variable
register variable
*/

void staticFunction(void)
{
    // static variable
    static int a = 0;
    printf("static a is (staticFunction ) %d\n", a);
    a++;
}

void externFunction(void)
{
    // extern variable
    extern int externTute23;
    printf("I am extern from tute_23_testing(externFuction) %d\n", externTute23);
}

int main()
{
    // auto variable in c(by default)
    auto int a = 30;

    // register variable;
    // register variable is storage in CPU register (it is close to CPU)
    register float quick = 3.14;
    externFunction();
    staticFunction();
    staticFunction();
    staticFunction();
    staticFunction();

    return 0;
}