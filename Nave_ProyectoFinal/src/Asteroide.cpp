#include "Asteroide.h"
#include "Nave.h"
Asteroide::Asteroide(int cax,int cay)
{
    this->x=cax;
    this->y=cay;
}


void Asteroide::pintar()
{
    gotoxy(x,y); printf("%c",184);
}

void Asteroide::mover()
{
    gotoxy(x,y);printf(" ");
    y++;
    if(y > 29){
        x = rand()%71+4;
        y = 4;
    }
    pintar();
}

void Asteroide::colision(Nave &n)
{
    if( x >= n.CX() && x < n.CX()+5 && y >= n.CY() && y <= n.CY()+2 ){//intervalo que ocupa la nave en la colision
        n.borrar();
        n.CCOR();
        n.pintar();
        n.pintar_corazones();
        x = rand()%71+4;
        y = 4;
    }
}
int Asteroide::AX(){return x;}
int Asteroide::AY(){return y;}
