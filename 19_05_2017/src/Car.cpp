#include "Car.h"
#include "Vehicle.h"
#include <iostream>
#include <string.h>
#include <strings.h>
#include <string>
#include <sstream>
using namespace std;

Car::Car(const string & myLicense , const int myYear , const string &myStyle ): Vehicle(myLicense,myYear), style(myStyle)
{}
const string Car::getDesc()// Overriding this member function
{
    ostringstream temp;
    temp<<year;
    return temp.str() + " " + style + ": " + license;
}
const string &Car::getStyle()
{
     return style;
}
