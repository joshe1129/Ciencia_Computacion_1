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

    *******************operador ternario ************************* */
    int a,b,c;
    cout<<"ingrese a: " << endl;
    cin>>a;
    cout<<"ingrese b: " << endl;
    cin>>b;
    cout<<"El numero mayor es:" << (c=(a>b)?a:b) << endl; // if(a>b) c=a; else c = b;

}
