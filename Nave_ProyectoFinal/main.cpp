#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define ARRIBA 72 // NUMERO ASIGNADO A UNA TECLA DEL TECLADO
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

 void gotoxy(int x, int y){
    HANDLE hConsola;
    hConsola = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hConsola, dwPos);

 }
 void OcultarCursor(){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 1;
    cci.bVisible = FALSE;

    SetConsoleCursorInfo(hCon,&cci);
 }
void Pintar_Limites(){
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


 class Nave{
    int x,y; //coordenadas de la nave
    int corazones;
    int vidas;
public:
    Nave(int cx,int cy, int ccorazones, int cvidas):x(cx),y(cy),corazones(ccorazones),vidas(cvidas){}
    void pintar();
    void borrar();
    void mover();
    void pintar_corazones();
    void morir();


};


void Nave::pintar(){
    gotoxy(x,y); printf("  %c",30); //caracter codigo ascii 30
    gotoxy(x,y+1); printf(" %c%c%c",40,207,41);
    gotoxy(x,y+2); printf("%c%c %c%c",30,190,190,30);

}
void Nave::borrar(){
    gotoxy(x,y);   printf("             ");
    gotoxy(x,y+1); printf("             ");
    gotoxy(x,y+2); printf("             ");
}
void Nave::mover(){
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
void Nave::pintar_corazones(){

    gotoxy(50,2);printf("Vidas: %d",vidas);
    gotoxy(64,2);printf("Salud");
    gotoxy(70,2);printf("    ");
    for(int i=0; i<corazones;i++){
        gotoxy(70+i,2); printf("%c",3);
    }
}

void Nave::morir(){
    if(corazones == 0){
        borrar();
        gotoxy(x,y);   printf("   **   ");
        gotoxy(x,y+1); printf("  ****  ");
        gotoxy(x,y+2); printf("   **   ");
        Sleep(200);

        borrar();
        gotoxy(x,y);   printf(" *  **  * ");
        gotoxy(x,y+1); printf("*  *  *  *");
        gotoxy(x,y+2); printf(" *  **  * ");
        Sleep(200);
        borrar();
        gotoxy(x,y);   printf(" *  * *  * ");
        gotoxy(x,y+1); printf("*  * * *  *");
        gotoxy(x,y+2); printf(" *  * *  * ");
        Sleep(200);
        borrar();
        vidas--;
        corazones = 3;
        pintar_corazones();
        pintar();

    }

}


int main()
{
    OcultarCursor();
    Pintar_Limites();
    Nave n(7,7,3,3);
    n.pintar();
    n.pintar_corazones();
    bool game_over = false;
    while(!game_over){
        n.morir();
        n.mover();
        Sleep(30);
    }

    return 0;

}
