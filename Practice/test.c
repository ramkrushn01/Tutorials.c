// gcc test.c -o test.exe -lm -lwinmm && test.exe
#include <stdio.h>
#include <windows.h>
#include <MMsystem.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void play(void){
        PlaySoundA((LPCSTR) "stdin.wav", NULL, SND_FILENAME | SND_ASYNC);


}

int main()
{
    int k = 0;

    while (kbhit)
    {
        char a;
        char cmd[30];

        // PlaySoundA((LPCSTR) "D:\\C_Practical\\Practice\\stdin.wav", NULL, SND_FILENAME | SND_ASYNC);
        play();

        a = getche();
        cmd[k] = a;
        k++;
        if ((int)a == 13)
        {
            system(cmd);
            for (int i = 0; i < strlen(cmd); i++)
            {
                cmd[i] = ' ';
            }
            // memset(cmd,'\0',sizeof(cmd));
            k = 0;
        }
        else if ((int)a == 27)
        {
            break;
        }
    }

    return 0;
}