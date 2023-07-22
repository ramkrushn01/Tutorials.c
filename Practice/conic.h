#define clear() printf("\033[H\033[J")
#define gotoxy(x, y) printf("\033[%d;%dH", (y), (x))

// color is here ...

#define reset() printf("\033[0m")
#define black() printf("\033[0;30m")
#define red() printf("\033[0;31m")
#define green() printf("\033[0;32m")
#define yellow() printf("\033[0;33m")
#define blue() printf("\033[0;34m")
#define purple() printf("\033[0;35m")
#define cyan() printf("\033[0;36m")
#define white() printf("\033[0;37m")
#define underLineRed() printf("\e[4;31m")

#define __MINGW_ATTRIB_DEPRECATED_MSVC2005 \
    __MINGW_ATTRIB_DEPRECATED_STR(__MINGW_MSVC2005_DEPREC_STR)

int __cdecl getch(void) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
