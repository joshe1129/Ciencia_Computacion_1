#include "Manager.h"
#include "Empleado.h"

Manager::Manager(string elnombre, float elpago, bool espagado): Empleado(elnombre, elpago)
{
  salariado = espagado;
}

bool Manager::getSalario() const
{
  return salariado;
}

float Manager::Pago(float horas_trabajadas) const
{
  if(salariado){
        return pago;
  }
  else
    return Empleado::Pago(horas_trabajadas);
}
