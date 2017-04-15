/* Escriba una función para calcular la potencia de dos números, dicha función debe recibir dos
argumentos, la base y el exponente y debe retornar el resultado. -Jose Salinas- */
#include <iostream>
#include <math.h>
using namespace std;
int potencia(const int bas, const int exp ){
    return pow(bas,exp);
}

int main()
{
    int bas, exp;
    cout << "ingrese el numero:";
    cin >> bas;
    cout << "ingrese el exponete al que desea elevar el numero:";
    cin >> exp;
    cout<<bas<<"^"<<exp<<"="<<potencia(bas,exp)<<endl;
    return 0;
}
