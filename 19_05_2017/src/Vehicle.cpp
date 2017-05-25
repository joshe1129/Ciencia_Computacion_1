#include "Vehicle.h"
#include <iostream>
#include <string.h>
#include <strings.h>
#include <string>
#include <sstream>
using namespace std;

Vehicle::Vehicle(const string &myLicense , const int myYear )
{
    license = myLicense;
    year = myYear;
}
const string Vehicle::getDesc()
{
    ostringstream temp;
    temp<<year;
    return license + " from " +temp.str();
}
const string Vehicle::getLicense()
{
     return license ;
}
const int Vehicle::getYear()
{
     return year ;
}

