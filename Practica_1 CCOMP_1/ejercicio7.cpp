/* Escriba una función para el intercambio de dos números usando paso por referencia. -jose salinas- */
#include <iostream>
using namespace std;
void intercambio(int *, int *);
int main( )
{
    int num1, num2;
    cout << "Introduce primer numero: ";
    cin >> num1;
    cout << "Introduce segundo numero: ";
    cin >> num2;
    cout << "valor del numero1: " << num1 << " y el valor de numero 2: " << num2 << endl;
    intercambio(&num1, &num2);
    cout << "Despues del intercambio: " << endl;
    cout << "valor del numero1: " << num1 << " y el valor de numero 2: " << num2 << endl;
    return 0;
}
void intercambio(int *x, int *y)
{
    int var;
    var = *x;
    *x = *y;
    *y = var;
}
