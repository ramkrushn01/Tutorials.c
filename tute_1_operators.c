#include <stdio.h>

int main()
{
    /* 1) Arithmatic oparators +,-,*,/,%
    2) Realtinal oparators ==, !=, >, <, >=, <= 
    3) Logical oparators &&, ||, !
    4) Bitwise oparators &, |, ^
    5) Assingment oparators ==, +=, -=, *=, /=
    6) Misciniace Operators &, *, sizeof, ?:
    */

    int a, b;
    a = 3;
    b = 5;

    // 1) Arithmatic operators

    printf("\n\n___________Arithmatic operators in c_______________________");

    printf("The sum of a and b is :%d \n", a + b);
    printf("The substration of a and b is :%d \n", a - b);
    printf("The multiplication of a and b is :%d \n", a * b);
    printf("The Division of a and b is :%d \n", a / b);
    printf("The module(Reminder) of a and b is :%d \n", a % b);

    // 2) Relational Operators *its return boolean
    printf("\n\n___________Relational operators in c_______________________\n");
    printf("== operator %d\n", a == b);
    printf("!= operator %d\n", a != b);
    printf("> operator %d\n", a > b);
    printf("< operator %d\n", a <= b);
    printf(">= operator %d\n", a >= b);
    printf("<= operator %d\n", a <= b);

    // 3) Logical operations *its return boolean values
    printf("\n\n___________Logical operators in c_______________________\n");
    printf("Logical AND oparator: %d\n", a && b);
    printf("Logical OR oparator: %d\n", a || b);
    printf("Logical NOT oparator: %d\n", !b);

    // 4) Bitwise operators in c
    printf("\n\n___________Logical operators in c_______________________\n");
    printf("& bitwise operators: %d\n", a & b); // bitwise and
    printf("& bitwise operators: %d\n", a | b); // bitwise or
    printf("^ bitwise operators: %d\n", a ^ b); //bitwise xor

    // 5) Assingment Operators
    printf("\n\n___________Assingment operators in c_______________________\n");
    printf(" = Assing the value :%d\n", a = b);
    printf(" += Increament the value :%d\n", a += b);
    printf(" -= Decrement the value :%d\n", a -= b);
    printf(" *= multiply the value :%d\n", a *= b);
    printf(" /= divide the value :%d\n", a /= b);

    // 6) Misciniace Operators
    printf("\n\n___________Misciniace operators in c_______________________\n");
    printf("& variable Address: %d\n", &a);
    printf("* point to the varialble:*c \n");
    printf("to cheack the Variable size: %d\n", sizeof(a));
    printf("?: short hand if else: %d\n", a = 3 ? 200 : 300);
    printf("to check ?: operators: \n");

    return 0;
}