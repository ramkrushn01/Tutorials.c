#include <stdio.h>


int add(int a,int b);
int main(int argc, int const *argv[])
{

    printf("%d\n",sizeof(argv[1]));

    printf("%d\n",add(10,20));
    return 0;
}

int add(int a,int b){
    return a+b;
}