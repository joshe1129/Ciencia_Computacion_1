#include "Jefe.h"
#include "Empleado.h"
Jefe::Jefe(string elnombre, float elpago, bool espagado): Empleado(elnombre, elpago)
{
  salariado = espagado;
}

bool Jefe::getSalario() const
{
  return salariado;
}

float Jefe::Pago(float horas_trabajadas) const
{
  if(salariado){
        return pago;
  }
  else
    return Empleado::Pago(horas_trabajadas);
}
