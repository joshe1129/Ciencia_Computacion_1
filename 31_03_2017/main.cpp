#include <iostream>

using namespace std;

int main()
{
    /* ****intercambio de valores en un arreglo**********
    int score[4];
    int i=1,var;
    cout<<"ingrese el valor del arreglo "<<i<<endl;
    cin>>score[0];
    i++;
    cout<<"ingrese el valor del arreglo "<<i<<endl;
    cin>>score[1];
    i++;
    cout<<"ingrese el valor del arreglo "<<i<<endl;
    cin>>score[2];
    i++;
    cout<<"ingrese el valor del arreglo "<<i<<endl;
    cin>>score[3];
    var=score[0];
    score[0]=score[3];
    score[3]=var;
    var=score[1];
    score[1]=score[2];
    score[2]=var;
    cout<< "******" << endl;
    cout<< score[0] << endl;
    cout<< score[1] << endl;
    cout<< score[2] << endl;
    cout<< score[3] << endl;
    ********funciones recursivas: cambio************
    int tam,i,var, temp;
    cout<<"ingrese tamaño del arreglo: ";
    cin>>tam;
    int arreglo[tam];
    for(i=0;i<tam;i++){
        cout<<"ingrese el valor del arreglo "<<i<<endl;
        cin>>arreglo[i];
    }
    cout<< "******" << endl;
    temp=tam-1;
    for(i=0;i<tam/2;i++){
        var=arreglo[i];
        arreglo[i]=arreglo[temp];
        arreglo[temp]=var;
        temp--;
    }
    cout<< "******" << endl;
    for(i=0;i<tam;i++){
        cout<<arreglo[i]<<endl;
    }
    *********suma del arreglo***************************
    int tam,i,sum;
    cout<<"ingrese tamaño del arreglo: ";
    cin>>tam;
    int arreglo[tam];
    for(i=0;i<tam;i++){
        cout<<"ingrese el valor del arreglo "<<i<<endl;
        cin>>arreglo[i];
    }
    cout<< "******" << endl;
    sum=0;
    for(i=0;i<tam;i++){
        sum=sum+arreglo[i];
    }
    cout<< "la suma de los valores del arreglo es: "<<sum<<endl;
    *********mayor elemeto en un arreglo*********************** */
    int tam,i,may;
    cout<<"ingrese tamaño del arreglo: ";
    cin>>tam;
    int arreglo[tam];
    for(i=0;i<tam;i++){
        cout<<"ingrese el valor del arreglo "<<i<<endl;
        cin>>arreglo[i];
    }
    cout<< "******" << endl;
    may=0;
    for(i=0;i<tam;i++){
        if(may<arreglo[i])
            may=arreglo[i];
    }
    cout<< "El mayor de los numeros del arreglo es: "<<may<<endl;



}
