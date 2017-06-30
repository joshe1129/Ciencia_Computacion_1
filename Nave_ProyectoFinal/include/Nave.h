#ifndef NAVE_H
#define NAVE_H

#include <Gamemanager.h>


class Nave:public Gamemanager
{
    int corazones;
    int vidas;
public:
    Nave(int cx,int cy, int ccorazones, int cvidas);
    int CX();
    int CY();
    int Vidas();
    void CCOR();
    void pintar();
    void borrar();
    void mover();
    void pintar_corazones();
    void morir();

};

#endif // NAVE_H
