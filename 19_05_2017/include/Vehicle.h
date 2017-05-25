#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"
#include <string.h>
#include <strings.h>
#include <iostream>
using namespace std;
class Vehicle
{
    protected:
        string license;
        int year;
    public :
        Vehicle ( const string &myLicense , const int myYear );
    const string getDesc();
    const string getLicense();
    const int getYear();
    void print();

};

#endif // VEHICLE_H
