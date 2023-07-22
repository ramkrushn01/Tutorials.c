#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <string.h>
#include <conio.h>
#include "conic.h"

int columns, rows;
void getWindoSize(void)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}
void hideCursor(int show_or_hide)
{
    CONSOLE_CURSOR_INFO cursor;
    cursor.bVisible = show_or_hide;
    cursor.dwSize = sizeof(cursor);
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorInfo(handle, &cursor);
}

void intro(void)
{
    getWindoSize();

    hideCursor(0);
    clear();
    cyan();
    int x = columns / 2.5;
    int y = rows / 2;

    char intros[60] = "|___________WELCOME TO RAM HACKNG MACHINE____________|";

    for (int j = 0; j < strlen(intros); j++)
    {
        cyan();
        gotoxy(x + strlen(intros) - j, y + 1);
        printf("-", j % 9);

        gotoxy(x + strlen(intros) - j, y + 3);
        printf("-");

        //PlaySoundA((LPCSTR) "stdout.wav", NULL, SND_FILENAME | SND_ASYNC);
        Sleep(1);
        underLineRed();
        gotoxy(x + j, y + 2);
        // printf("\e[4%dm%c\03",j%9,intros[j]);
        printf("%c", intros[j]);

        Sleep(50);
    }

    reset();
    getch();
    hideCursor(1);
    clear();
}

int main()
{
    clear();
    intro();
    while (1)
    {

        char cmd[33];

        purple();
        printf("\t\t\t\t\t\t ---------------------\n"
               "\t\t\t\t\t\t \03\03\03   RAMKRUSHN   \03\03\03\n"
               "\t\t\t\t\t\t ---------------------\n");

        green();
        printf("┌──(ramkrushn㉿DESKTOP-BSBMIMS)-[Windows]\n└─$ ");
        gets(cmd);

        if (cmd[0] == 'e' && cmd[1] == 'x' && cmd[2] == 'i' && cmd[3] == 't')
        {
            goto end;
        }
        red();
        printf("______________________________________________________________________________________________\n");
        cyan();
        system(cmd);
    }
end:
    reset();

    return 0;
}
