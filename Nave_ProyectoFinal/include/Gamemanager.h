#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <list>
#include <iostream>
using namespace std;

class Gamemanager
{

    public:
        int x,y;
        void gotoxy(int _x, int _y);
        void OcultarCursor();
        void Pintar_Limites();
        Gamemanager();
        virtual ~Gamemanager();

};

#endif // GAMEMANAGER_H
