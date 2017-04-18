/* Reescriba la función de intercambio de dos números, utilice punteros en lugar de paso por
referencia. -jose salinas- */

#include <iostream>
using namespace std;
void intercambio(int *, int *);
int main( )
{
    int num1, num2;
    int *ptrnum1;
    int *ptrnum2;
    cout << "Introduce primer numero: ";
    cin >> num1;
    ptrnum1 = &num1;
    cout << "Introduce segundo numero: ";
    cin >> num2;
    ptrnum2 = &num2;
    cout << "valor del numero 1: " << *ptrnum1 << " y el valor de numero 2: " << *ptrnum2 << endl;
    intercambio(ptrnum1, ptrnum2);
    cout << "Despues del intercambio: " << endl;
    cout << "valor del numero1: " << *ptrnum1 << " y el valor de numero 2: " << *ptrnum2 << endl;
    return 0;
}

void intercambio(int *x, int *y)
{
    int var;
    var = *x;
    *x = *y;
    *y = var;
}

