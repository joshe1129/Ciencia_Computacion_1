/* Escriba una función recursiva para hallar la suma de los elementos de un arreglo -Jose Salias- */
#include <iostream>

using namespace std;

int sum_arr(int [], int);

int main(){
    int n;
    cout<<"ingresa la cantidad de elementos del arreglo:";
    cin>>n;
    n--;
    int arreglo[n];
      cout<<"ingresa los elementos del arreglo:"<<endl;
    for(int i=0;i<=n;i++){
            cin>>arreglo[i];
    }
    cout<<"la suma del arreglo es:"<<sum_arr(arreglo,n);
}
int sum_arr(int arreglo[], int tam){
     if(tam==0)
    {
        return arreglo[0];
    }else
        return arreglo[tam-1]+sum_arr(arreglo,tam-1);
}
