#include <iostream>
#include "Punto.h"
using namespace std;

void Punto::print()
{
    cout<<"("<<x<<","<<y<<")";

}
void Punto::offset(float offsetx, float offsety)
{
        x+=offsetx;
        y+=offsety;
}
