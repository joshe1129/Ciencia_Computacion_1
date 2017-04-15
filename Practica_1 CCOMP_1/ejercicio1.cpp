/* Escriba una programa en C++ que convierta de millas a kilómetros. Su programa debe
solicitar por teclado el ingreso de las millas -José Salinas- */
#include <iostream>

using namespace std;

int main()
{
    float mil, kil;
    cout << "Ingrese las millas: ";
    cin >> mil;
    cout << "En kilometros: " << (mil*1.609344) << endl;
}

