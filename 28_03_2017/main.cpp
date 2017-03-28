#include <iostream>

using namespace std;

int main()
{
    /* ******equivalencias de operaciones*********
    int c = 5;
    int x = c++;//c=c+1
    cout << c << endl;
    cout << x << endl;
    c = 5;
    x = ++c;
    cout << c << endl;
    cout << x << endl;
    int i = 2;
    i+=2;//i=i+2;
    cout << i << endl;
    i = 2;
    i*=5;
    cout << i << endl;
    i = 2;
    i/=2;
    cout << i << endl;

    *******************operador ternario *************************
    int a,b,c;
    cout<<"ingrese a: " << endl;
    cin>>a;
    cout<<"ingrese b: " << endl;
    cin>>b;
    cout<<"El numero mayor es:" << (c=(a>b)?a:b) << endl; // if(a>b) c=a; else c = b;
    *********************ARREGLOS******************************************
    int arreglo[5];
    int a;
    cout<<"ingrese un entero: " << endl;
    cin>>a;
    arreglo[0]=a;
    cout<<"ingrese un entero: " << endl;
    cin>>a;
    arreglo[1]=a;
    cout<<"ingrese un entero: " << endl;
    cin>>a;
    arreglo[2]=a;
    cout<<"ingrese un entero: " << endl;
    cin>>a;
    arreglo[3]=a;
    cout<<"ingrese un entero: " << endl;
    cin>>a;
    arreglo[4]=a;
    cout<< "el arreglo es: "<<"["<<arreglo[0]<<"]"<<"["<<arreglo[1]<<"]"<<"["<<arreglo[2]<<"]"<<"["<<arreglo[3]<<"]"<<"["<<arreglo[4]<<"]"<< endl;
    **************************************************************************/
    int score[6];
    int c = 5;
    score[0] = c++;
    score[1] = c++;
    score[2] = c++;
    score[3] = c++;
    score[4] = c++;
    score[5] = c++;

    cout<< score[0] << endl;
    cout<< score[1] << endl;
    cout<< score[2] << endl;
    cout<< score[3] << endl;
    cout<< score[4] << endl;
    cout<< score[5] << endl;

}
