#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std;

class Empleado
{
    public:
        Empleado(string elnombre, float elpago);

    string getNombre() const;
    float getPago() const;

    virtual float Pago(float horas_trabajadas) const;

    protected:
        string nombre;
        float pago;
};

#endif // EMPLEADO_H
