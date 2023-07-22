#include <stdio.h>
// constant
#define e 2.33

int main()
{
    // format Specifier
    printf("\n_____format Specifier______\n");
    printf("Enter your value%c\n", 'c');
    printf("Enter your value%d\n", 3);
    printf("Enter your value%0.3f\n", 4.4);
    printf("Enter your value%f\n", 4.4);
    printf("Enter your value%s\n", "string");
    printf("Enter your value%ld\n", 402.21510);

    printf("\n_____Escape Sequnce in c______\n");
    printf("new line \\n\n\n");
    printf("horizentle tab \\t\t\n");
    printf("vertical tab \\v\v\n");
    printf("for beep \\a\a\n");
    printf("for backspace \\b\b\n");

    // constant in C const-->keyword or #define e 2.33
    printf("\n_____constats in C______\n");

    int a;
    a = 120;
    const float pi = 3.144;

    printf("a: %d\n", a);
    printf("pi value: %f\n", pi);
    printf("e value: %f\n", e);

    return 0;
}
