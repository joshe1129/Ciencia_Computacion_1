#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"

class Vector
{
    public:
        Punto inicio, fin;
        void print();
        void offset(float offsetx,float offsety);
        float distancia();
};

#endif // VECTOR_H
