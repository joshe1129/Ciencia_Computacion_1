#ifndef ASTEROIDE_H
#define ASTEROIDE_H

#include <Gamemanager.h>


class Asteroide : public Gamemanager
{
    public:
    Asteroide(int cax,int cay);
    void pintar();
    void mover();
    void colision(class Nave &n);
    int AX();
    int AY();
};

#endif // ASTEROIDE_H
