/* Escriba un programa en C++ que verifique si el número ingresado es par o impar. El
programa debe solicitar el número por teclado y solamente debe detenerse cuando el usuario
ingresa -1. -Jose Salinas- */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num=0;
    cout<<"ingrese un numero:";
    cin>>num;
    do{

        if(num%2==0)
            cout<<num<<" es par"<<endl;
        else
            cout<<num<<" es impar"<<endl;
        cout<<"vuelva a ingresar un numero si desea salir escriba '-1'"<<endl;
        cin>>num;
    }while(num!=-1);
}
