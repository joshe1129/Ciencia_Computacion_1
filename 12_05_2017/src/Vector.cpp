#include <iostream>
#include <math.h>
#include "Vector.h"
using namespace std;


void Vector::print()
{
    inicio.print();
    cout<<"---";
    fin.print();
}
void Vector::offset(float offsetx, float offsety)
{
        inicio.offset(offsetx,offsety);
        fin.offset(offsetx,offsety);
}
float Vector::distancia()
{
    float hip;
    hip=sqrt(((fin.x-inicio.x)*(fin.x-inicio.x))+((fin.y-inicio.y)*(fin.y-inicio.y)));
    return hip;
}
