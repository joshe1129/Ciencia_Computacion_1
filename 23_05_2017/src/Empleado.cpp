#include "Empleado.h"

Empleado::Empleado(string elnombre, float elpago)
{
  nombre = elnombre;
  pago = elpago;
}

string Empleado::getNombre() const
{
  return nombre;
}

float Empleado::getPago() const
{
  return pago;
}

float Empleado::Pago(float horas_Trabajadas) const
{
  return horas_Trabajadas * pago;
}
