#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

int main()
{
    Vehicle v1("licencia",2017);
    cout<<v1.getDesc()<<endl;
    Car c1("licencia",2016,"deportivo");
    cout<<c1.getDesc()<<endl;
    return 0;
}
