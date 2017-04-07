#include <iostream>
#include <string>
#include <strings.h>
#include <string.h>

using namespace std;

int suma(const int arreglo[],const int tam)
{
    int sum=0;
    for(int i=0;i<tam;sum+=arreglo[i++]);
    return sum;

}
float promedio(const int arreglo[],const int tam)
{
   return (float) suma(arreglo,tam)/tam;

}
void invertir(int arreglo[], int tam){
    int temp=tam;
    for(int i=0;i<=tam/2;i++){
        int var;
        var=arreglo[i];
        arreglo[i]=arreglo[temp];
        arreglo[temp]=var;
        temp--;
    }
    cout<< "******" << endl;
    for(int i=0;i<=tam;i++){
        cout<<arreglo[i]<<endl;
    }
}
void ordenar(int arreglo[],int tam)
{
    for(int i=0;i<=tam;i++){
        for(int j=0;j<=tam;j++){
            if(arreglo[i]<arreglo[j]){
                    int var;
                    var=arreglo[i];
                    arreglo[i]=arreglo[j];
                    arreglo[j]=var;
            }
        }
    }
    cout<< "******" << endl;
    for(int i=0;i<=tam;i++){
        cout<<arreglo[i]<<endl;
    }
}

int t_cadena(char cadena[])
{
    int i=0;
    while(cadena[i++]!='\0');
    return i;
}

int main()
{
    /*int n;
    cout<<"ingresa la cantidad de elementos del arreglo:";
    cin>>n;
    n=n-1;
    int arreglo[n];
    cout<<"ingresa los elementos del arreglo:"<<endl;
    for(int i=0;i<=n;i++)
        cin>>arreglo[i];
    cout<<"la suma de los elementos es:"<<suma(arreglo,n)<<endl;
    cout<<"el promedio de los elementos es:"<<promedio(arreglo,n)<<endl;
    invertir(arreglo,n);
    ordenar(arreglo,n);*/
    char cadena[]="hola mundo";
    cout<<"tamaño de la cadena:"<<t_cadena(cadena);


}


