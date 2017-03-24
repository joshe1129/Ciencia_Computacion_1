#include <iostream>

using namespace std;

int main()
{
    /* valores previamente asignados por '='
    int x = 4 ;
    float y = 5;
    float z = x + y;
    cout << "Hello world!" << endl;
    cout << "la suma de " << x << "+" << y << " es: " << z << endl;
    z = x - y;
    cout << "la resta de " << x << "-" << y << " es: " << z << endl;
    z = x * y;
    cout << "la multiplicacion de " << x << "*" << y << " es: " << z << endl;
    z = x / y;
    cout << "la division de " << x << "/" << y << " es: " << z << endl;
    */
    //ingresar valores a las variables declaradas con 'cin>>'
    int x;
    float y;
    cout<<"ingrese x:";
    cin>>x;
    cout<<"ingrese y:";
    cin>>y;
    float z = x + y;
    cout << "la suma de " << x << "+" << y << " es: " << z << endl;
    cout<<"ingrese x:";
    cin>>x;
    cout<<"ingrese y:";
    cin>>y;
    z = x - y;
    cout << "la resta de " << x << "-" << y << " es: " << z << endl;
    cout<<"ingrese x:";
    cin>>x;
    cout<<"ingrese y:";
    cin>>y;
    z = x * y;
    cout << "la multiplicacion de " << x << "*" << y << " es: " << z << endl;
    cout<<"ingrese x:";
    cin>>x;
    cout<<"ingrese y:";
    cin>>y;
    z = x / y;
    cout << "la division de " << x << "/" << y << " es: " << z << endl;





    return 0;
}
