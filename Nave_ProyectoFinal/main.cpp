#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <list>
using namespace std;
#include "Gamemanager.h"
#include "Nave.h"
#include "Asteroide.h"
#include "Bala.h"


int main()
{
    Gamemanager g;
    g.Pintar_Limites();
    g.OcultarCursor();
    Nave n(30,25,3,3);
    n.pintar();
    n.pintar_corazones();
    list<Asteroide *> A;
    list<Asteroide *>:: iterator itA;
    for(int i = 0; i <=7 ; i++){
            A.push_back(new Asteroide(rand()%75+3, rand()%5 + 4));

    }
    list<Bala *> B;//lista de punteros de objetos de la clase bala
    list<Bala *>::iterator it;
    bool game_over = false;
    int puntos = 0;
    while(!game_over){
        g.gotoxy(4,2);printf("Puntos: %d",puntos);
        if(kbhit())
        {
            char tecla = getch();
            if (tecla == 'a')
                B.push_back(new Bala(n.CX()+2, n.CY() -1 ));
        }
        for(it = B.begin();it != B.end(); it++)
        {
            (*it)->mover();
            if((*it)->fuera()){
                g.gotoxy((*it)->CX(), (*it)->CY()); printf(" ");
                delete(*it);
                it = B.erase(it);//iterador se posiciona en el siguiente iterador
            }

        }

            for(itA = A.begin(); itA != A.end(); itA++){
            (*itA)->mover();
            (*itA)->colision(n);
        }
        for(itA=A.begin(); itA != A.end(); itA++){
            for(it = B.begin() ; it != B.end() ; it++){
                if((*itA)->AX() == (*it)->CX() && ( (*itA)->AY()+1 == (*it)->CY() || (*itA)->AY() == (*it)->CY() )) //detectar colision de balas y asteroides
                    {
                        g.gotoxy((*it)->CX(),(*it)->CY());printf(" ");
                        delete(*it);
                        it = B.erase(it);

                        A.push_back(new Asteroide(rand()%75+3, rand()%5 + 4));
                            g.gotoxy((*itA)->AX(),(*itA)->AY());printf(" ");
                            delete(*itA);
                            itA = A.erase(itA);

                        puntos+=5;

                    }


            }


        }



        if(n.Vidas() == 0) game_over = true;
        n.morir();
        n.mover();
        Sleep(30);
    }
    system("cls"); //Limpia la pantalla con ms dos.
    g.gotoxy(1,10);printf("  ________                           ________                        ._.\n");
    g.gotoxy(1,11);printf(" /  _____/ _____     _____    ____   \\_____  \\ ___  __  ____ _______ | |\n");
    g.gotoxy(1,12);printf("/   \\  ___ \\__  \\   /     \\ _/ __ \\   /   |   \\\\  \\/ /_/ __ \\\\_  __ \\| |\n");
    g.gotoxy(1,13);printf("\\    \\_\\  \\ / __ \\_|  Y Y  \\\\  ___/  /    |    \\\\   / \\  ___/ |  | \\/ \\|\n");
    g.gotoxy(1,14);printf(" \\______  /(____  /|__|_|  / \\___  > \\_______  / \\_/   \\___  >|__|    __\n");
    g.gotoxy(1,15);printf("        \\/      \\/       \\/      \\/          \\/            \\/         \\/\n");


    system("pause");
    Sleep(30);
}
