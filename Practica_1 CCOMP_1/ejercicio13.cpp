/* Reescriba el ejercicio 12 utilizando punteros en lugar de arreglos. -jose salinas- */

#include <iostream>

using namespace std;

void invertir(int *arreglo, int tam){
        int temp=tam;
        for(int i=0;i<(tam/2);i++){
            int var;
            var=*(arreglo+i);
            *(arreglo+i)=*(arreglo+temp);
            *(arreglo+temp)=var;
            temp--;
        }
        cout<< "******" << endl;
        for(int i=0;i<=tam;i++){
            cout<<arreglo[i]<<endl;
        }
    }

int main()
{
    int n;
    cout<<"ingresa la cantidad de elementos del arreglo:";
    cin>>n;
    n--;
    int arreglo[n];
    cout<<"ingresa los elementos del arreglo:"<<endl;
    for(int i=0;i<=n;i++){
            cin>>arreglo[i];
    }
    invertir(arreglo,n);
}
