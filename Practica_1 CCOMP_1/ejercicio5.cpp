/* Escriba un programa que retorne el número ingresado en palabras. Por ejemplo si el usuario
ingresa el número 1 el programa debe retornar “uno”, si el usuario ingresa el número 0 el
programa retorna “cero”… el programa solo permite números del 0 al 9, caso contrario debe
imprimir el mensaje “Número no permitido” y debe terminar cuando el usuario ingresa el
número -1. -Jose Salinas- */
#include <iostream>
using namespace std;

int main()
{
    int num=0;
    cout<<"ingrese un numero del 0 al 9:";
    cin>>num;
    do{
        if(num==0){
            cout<<"cero"<<endl;
        }else if(num==1){
            cout<<"uno"<<endl;
        }else if(num==2){
            cout<<"dos"<<endl;
        }else if(num==3){
            cout<<"tres"<<endl;
        }else if(num==4){
            cout<<"cuatro"<<endl;
        }else if(num==5){
            cout<<"cinco"<<endl;
        }else if(num==6){
            cout<<"seis"<<endl;
        }else if(num==7){
            cout<<"siete"<<endl;
        }else if(num==8){
            cout<<"ocho"<<endl;
        }else if(num==9){
            cout<<"nueve"<<endl;
        }else
            cout<<"Error: el numero debe estar entre el rango 0 y 9 vuelva ingresarlo o ingrese -1 para terminar"<<endl;
        cin>>num;
      }while(num!=-1);
}

