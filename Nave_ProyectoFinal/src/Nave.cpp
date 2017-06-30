#include "Nave.h"
#define ARRIBA 72 // NUMERO ASIGNADO A UNA TECLA DEL TECLADO
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
Nave::Nave(int cx,int cy, int ccorazones, int cvidas)
{

    this->x=cx;
    this->y=cy;
    corazones = ccorazones;
    vidas = cvidas;
}
int Nave::CX(){return x;}
int Nave::CY(){return y;}
int Nave::Vidas(){return vidas;}
void Nave::CCOR(){ corazones --;}
void Nave::pintar()
{
    gotoxy(x,y); printf("  %c",30); //caracter codigo ascii 30
    gotoxy(x,y+1); printf(" %c%c%c",40,207,41);
    gotoxy(x,y+2); printf("%c%c %c%c",30,190,190,30);
}

void Nave::borrar()
{
    gotoxy(x,y);   printf("         ");
    gotoxy(x,y+1); printf("         ");
    gotoxy(x,y+2); printf("         ");
}
void Nave::mover()
{
    if(kbhit()){
            char tecla = getch();
            borrar();
            if(tecla == IZQUIERDA && x > 3)
                x--;
            if(tecla == DERECHA && x+5 < 77)// +6 por los caracteres de la nave
                x++;
            if(tecla == ARRIBA && y > 4)
                y--;
            if(tecla == ABAJO && y+3 < 30)
                y++;
            if(tecla == 'e')
                corazones--;
            gotoxy(x,y);
            pintar();
            pintar_corazones();
        }
}
void Nave::pintar_corazones()
{
     gotoxy(50,2);printf("Vidas: %d",vidas);
    gotoxy(64,2);printf("Salud");
    gotoxy(70,2);printf("    ");
    for(int i=0; i<corazones;i++){
        gotoxy(70+i,2); printf("%c",3);
    }
}

void Nave::morir()
{
    if(corazones == 0){
        borrar();
        gotoxy(x,y);   printf("   *   ");
        gotoxy(x,y+1); printf("  * *  ");
        gotoxy(x,y+2); printf("   *   ");
        Sleep(200);

        borrar();
        gotoxy(x,y);   printf(" *  * ");
        gotoxy(x,y+1); printf("* ** *");
        gotoxy(x,y+2); printf(" *  * ");
        Sleep(200);
        borrar();
        gotoxy(x,y);   printf(" *  *  * ");
        gotoxy(x,y+1); printf("*  ***  *");
        gotoxy(x,y+2); printf(" *  *  * ");
        Sleep(200);
        borrar();
        vidas--;
        corazones = 3;
        pintar_corazones();
        pintar();

    }
}
