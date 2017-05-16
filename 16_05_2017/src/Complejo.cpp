#include <iostream>
#include "Complejo.h"
using namespace std;

Complejo::Complejo()
{
    r=0.0;
    i=0.0;
}

Complejo::Complejo(double real, double imaginario)
{
    r=real;
    i=imaginario;
}
void Complejo::imprimeComplejo()
{
    cout<<"("<<r<<","<<i<<")"<<endl;
}
Complejo Complejo::Suma(Complejo &c)
{
    Complejo ctemp;
    ctemp.r = r + c.r;
    ctemp.i = i + c.i;
    return ctemp;
}
void Complejo::ProductoEscalar(int num)
{
    r = r * num;
    i = i * num;
}
Complejo Complejo::Multiplicacion(Complejo &c)
{
    Complejo ctemp;
    ctemp.r = ((r*c.r)-(i*c.i));
    ctemp.i = ((r*c.i)+(i*c.r));
    return ctemp;
}
void Complejo::Igualdad(Complejo &c)
{
    r = c.r;
    i = c.i;
}
Complejo Complejo::Resta(Complejo &c)
{
    Complejo ctemp;
    ctemp.r = r - c.r;
    ctemp.i = i - c.i;
    return ctemp;
}
