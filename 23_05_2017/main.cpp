#include <iostream>
#include "Empleado.h"
#include "Manager.h"
#include "Jefe.h"
using namespace std;

int main()
{
    Empleado empl("John Burke", 25.0);
    cout << "Name: " << empl.getNombre() << endl;
    cout << "Pago: " << empl.Pago(40.0) << endl;
    Manager mgr("Jan Kovacs", 100.0, true);
    cout << "Nombre: " << mgr.getNombre() << endl;
    cout << "Pago: " << mgr.Pago(40.0) << endl;
    cout << "Salario: " << mgr.getSalario() << endl;
    Jefe jf("Jose Salinas", 120.0, false);
    cout << "Nombre: " << jf.getNombre() << endl;
    cout << "Pago: " << jf.Pago(40.0) << endl;
    cout << "Salario: " << jf.getSalario() << endl;
    cout<< "***con punteros y polimorfismo***"<< endl;
    Empleado *emp2P;
    emp2P = &empl;  // puntero a empleado
    cout << "Pago del empleado: " << emp2P->Pago(40.0) << endl;  // llama a empleado::Salario;
    emp2P = &mgr;  // puntero a manager
    cout << "Pago del manager: " << emp2P->Pago(40.0) << endl;  // llama Empleado:Salario()
    return 0;
}
