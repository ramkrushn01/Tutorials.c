#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("fileText.txt", "w+");

    char fileStr[] = "ramkrushn_BS\n";
    int a = 20;

    for (int i = 0; i < a; i++)
    {
        fprintf(file, fileStr);
    }
    fclose(file);

    FILE *file2;
    file2 = fopen("fileText.txt","r");
    
    for (int j = 0; j < a*13; j++)
    {
        printf("%c", fgetc(file2));
    }

    fclose(file);

    return 0;
}