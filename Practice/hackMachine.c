#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>

#include <conio.h>
#include "conic.h"
#include <stdlib.h>1

struct A
{
    POINT point1;
    unsigned sleep1;
    POINT point2;
    unsigned sleep2;
}x,y;

void windowFullScreen(void){
     CONSOLE_CURSOR_INFO;

    
}

void mouseEvent(void){
    struct A a;
    mouse_event(MOUSEEVENTF_LEFTDOWN,);
}
void startCmd(void)
{
    cyan();
    for (int i = 0; i < 500; i++)
    {
        gotoxy(30, i);
        printf("%c", '_');
        // sleep(1);
    }
    reset();
}

int main()

{

    startCmd();
    windowFullScreen();

    return 0;
}