#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string.h>
#include <strings.h>
#include <iostream>
using namespace std;
class Car: public Vehicle
{
    string style;
    public :
        Car(const string & myLicense , const int myYear , const string &myStyle);
        const string getDesc();
        const string &getStyle();
        void print();
};

#endif // CAR_H
