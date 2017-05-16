#include <iostream>
#include "Complejo.h"

using namespace std;

int main()
{
    Complejo c1(2,3);
    Complejo c2(1,2);
    c1.imprimeComplejo();
    c2.imprimeComplejo();
    Complejo c3 = c1.Suma(c2);
    c3.imprimeComplejo();
    c1.ProductoEscalar(2);
    c1.imprimeComplejo();
    Complejo c4 = c1.Multiplicacion(c2);
    c4.imprimeComplejo();
    c1.Igualdad(c2);
    c1.imprimeComplejo();
    Complejo c5 = c4.Resta(c1);
    c5.imprimeComplejo();
    return 0;
}
