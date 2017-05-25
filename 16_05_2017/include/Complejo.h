#ifndef COMPLEJO_H
#define COMPLEJO_H
#include "Complejo.h"


class Complejo
{
    private:
        double r,i;
    public:
        Complejo();
        Complejo(double real, double imaginario);
        void imprimeComplejo();
        Complejo Suma(Complejo &c);
        Complejo Resta(Complejo &c);
        void ProductoEscalar(int num);
        Complejo Multiplicacion(Complejo &c);
        void Igualdad(Complejo &c);


};

#endif // COMPLEJO_H
