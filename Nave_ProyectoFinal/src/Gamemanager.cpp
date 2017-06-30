#include "Gamemanager.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <list>
#include <iostream>
using namespace std;
void Gamemanager::gotoxy(int _x, int _y)
{
    HANDLE hConsola;
    hConsola = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = _x;
    dwPos.Y = _y;
    SetConsoleCursorPosition(hConsola, dwPos);
}
void Gamemanager::OcultarCursor()
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 1;
    cci.bVisible = FALSE;

    SetConsoleCursorInfo(hCon,&cci);
}
void Gamemanager::Pintar_Limites()
{
    for(int i=2;i<78;i++){
            gotoxy(i,3); printf("%c",205);
            gotoxy(i,30); printf("%c",205);

    }
    for(int i=4;i<30;i++){
        gotoxy(2,i); printf("%c",186);
        gotoxy(77,i); printf("%c",186);
    }
    gotoxy(2,3);printf("%c",201);
    gotoxy(2,30);printf("%c",200);
    gotoxy(77,3);printf("%c",187);
    gotoxy(77,30);printf("%c",188);
}

Gamemanager::Gamemanager()
{
    //ctor
}

Gamemanager::~Gamemanager()
{
    //dtor
}
