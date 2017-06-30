#ifndef BALA_H
#define BALA_H

#include <Gamemanager.h>


class Bala : public Gamemanager
{
    public:
    Bala(int cx, int cy);
    int CX();
    int CY();
    void mover();
    bool fuera();
};

#endif // BALA_H
