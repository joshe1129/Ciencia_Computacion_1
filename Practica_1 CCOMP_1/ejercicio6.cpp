/* Escriba un programa que tome una operación seguida de dos operandos y retorne el
resultado de dicha operación.
+ 50 3.6
* 4 5
La primera linea debe dar como resultado 53.6 y la segunda 20. -jose salinas- */
#include <iostream>
using namespace std;

int main()
{
    float num1,num2;
    char operacion;
    cout << "ingrese una operacion, seguido de dos operandos:"<<endl;
    cin >> operacion;
    cin >> num1;
    cin >> num2;
    if(operacion=='+'){
            cout<<num1+num2<<endl;
        }else if(operacion=='-'){
            cout<<num1-num2<<endl;
        }else if(operacion=='*'){
            cout<<num1*num2<<endl;
        }else if(operacion=='/'){
            cout<<num1/num2<<endl;
        }

    return 0;
}
