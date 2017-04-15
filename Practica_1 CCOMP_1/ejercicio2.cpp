/* Escriba una programa en C++ que muestre una tabla con grados Fahrenheit y su
correspondiente en grados Celsius, el rango de grados Fahrenheit debe ir de 0 a 300
subiendo de 20 en 20. - Jose Salinas - */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float far, cel;
    cout<<"-----------------"<<endl;
    cout<<"|Fahrenh|Celsius|"<<endl;
    cout<<"-----------------"<<endl;
    for(far=0;far<=300;far=far+20)
        cout<<"|"<<far<<"\t|"<< fixed << setprecision(2)<<((far-32)*5/9)<<"\t|"<<endl;
    cout<<"-----------------"<<endl;
    return 0;
}

