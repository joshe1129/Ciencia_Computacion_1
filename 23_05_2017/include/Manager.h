#ifndef MANAGER_H
#define MANAGER_H
#include "Empleado.h"

class Manager : public Empleado{
    public:
        Manager(string elNombre, float elpago, bool espagado);

  bool getSalario() const;

  virtual float Pago(float horas_trabajadas) const;

protected:
  bool salariado;
};
#endif // MANAGER_H
