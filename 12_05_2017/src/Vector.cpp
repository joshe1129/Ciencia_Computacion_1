#include <iostream>
#include <math.h>
#include "Vector.h"
using namespace std;


void Vector::print()
{
    inicio.print();
    cout<<endl;
    fin.print();
}
void Vector::offset(float offsetx, float offsety)
{
        inicio.offset(offsetx,offsety);
        fin.offset(offsetx,offsety);
}
void Vector::distancia()
{
    float hip;
    hip=sqrt(((fin.x-inicio.x)*(fin.x-inicio.x))+((fin.y-inicio.y)*(fin.y-inicio.y)));
    cout<<"\n***distancia***\n"<<hip;
}
