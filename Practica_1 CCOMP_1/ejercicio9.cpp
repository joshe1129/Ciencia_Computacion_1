/* Implemente en una función el algoritmo de ordenamiento llamado insertion-sort. El
algoritmo se encuentra en pseudocódigo en el libro “Introduction to algorithms” de CRLS,
capítulo 2. - JOSE SALINAS- */
#include <iostream>
#include <string>
#include <strings.h>
#include <string.h>

using namespace std;
int insert_sort(int arreglo[],const int tam)
{
    int i=0, key=0; // *always* initialize variables
        for (int j=1; i<tam; j++) // use pre-increment to avoid unneccessary temorary object
        {
                key= arreglo[j];
                i = j-1;
                while((i >= 0) && (arreglo[i] > key))
                {
                        arreglo[i+1] = arreglo[i];
                        i = i - 1;
                }
                arreglo[i+1]=key;
        }

    cout<< "******" << endl;
    for(int i=0;i<=tam;i++){
        cout<<arreglo[i]<<endl;
    }

}


int main(){
    int n;
    cout<<"ingresa la cantidad de elementos del arreglo:";
    cin>>n;
    n--;
    int arreglo[n];
    cout<<"ingresa los elementos del arreglo:"<<endl;
    for(int i=0;i<=n;i++)
        cin>>arreglo[i];
    insert_sort(arreglo,n);
    return 0;

}
