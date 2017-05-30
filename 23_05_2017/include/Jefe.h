#ifndef JEFE_H
#define JEFE_H
#include "Empleado.h"

class Jefe : public Empleado{
    public:
        Jefe(string elNombre, float elpago, bool espagado);

    bool getSalario() const;

    virtual float Pago(float horas_trabajadas) const;

protected:
  bool salariado;
};

#endif // JEFE_H
