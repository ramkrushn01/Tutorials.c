#include <stdio.h>

union choiceOne
{
    int fav;
    int like;
};

int main()
{
    // hold one value for one time
    // it is used for dynamic memory allocation
    typedef union choiceOne choice;

    // hold one value for one time

    choice ram, manoj, avinash;

    ram.fav = 99;
    printf("ram fav number %d\n", ram.fav);

    ram.like = 7;
    printf("ram like number %d\n", ram.like);

    manoj.fav = 5;
    printf("\nmanoj fav number %d\n", manoj.fav);

    manoj.like = 10;
    printf("manoj like number %d\n", manoj.like);

    avinash.fav = 7;
    printf("\navinash fav number %d\n", avinash.fav);

    avinash.like = 19;
    printf("avinash like number %d\n", avinash.like);

    return 0;
}