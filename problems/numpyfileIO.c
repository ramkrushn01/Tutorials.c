#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen64("numpyArr.np", "r");
    // char str[60];
    // fgets(str, sizeof(int), file);

    for (int i = 0; i < 11; i++)
    {
        // fgetc(file);
        printf("%d ", fgetc(file));
    }

    fclose(file);

    return 0;
}