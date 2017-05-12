#include <iostream>
#include "Punto.h"
#include "Vector.h"
using namespace std;


int main()
{
    Vector v1;
    v1.inicio.x=1.0;
    v1.inicio.y=4.0;
    v1.fin.x=2.0;
    v1.fin.y=5.0;
    v1.print();
    v1.offset(2.0,1.0);
    cout<<"\n***offset***"<<endl;
    v1.print();
    v1.distancia();
    return 0;

}
