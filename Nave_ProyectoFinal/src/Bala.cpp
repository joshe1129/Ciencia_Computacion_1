#include "Bala.h"

Bala::Bala(int cx, int cy)
{
    this->x=cx;
    this->y=cy;
}
int Bala::CX(){return x;}
int Bala::CY(){return y;}
void Bala::mover()
{
    gotoxy(x,y); printf(" ");
    y--;
    gotoxy(x,y); printf("|");
}
bool Bala::fuera()
{
    if (y==4) return true;
    return false;
}
