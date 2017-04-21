/* Implemente en una función el algoritmo de ordenamiento llamado merge-sort. El algoritmo
se encuentra en pseudocódigo en el libro “Introduction to algorithms” de CRLS, capítulo 2. -JOSE SALINAS- */
#include <iostream>
#include <string>
#include <strings.h>
#include <string.h>

using namespace std;

int merge_sort(int arreglo[],int p, int q, int r)
{
    int i, j, k;
    int n1 = q - p + 1;
    int n2 =  r - q;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arreglo[p + i - 1];
    for (j = 0; j < n2; j++)
        R[j] = arreglo[q + j];
    i=0;
    j=0;
    for(k=p;k<r;k++){
        if (L[i] <= R[j])
        {
            arreglo[k] = L[i];
            i++;
        }
        else
        {
            arreglo[k] = R[j];
            j++;
        }
    }
}
int mergeSort(int arreglo[], int p, int r){
    int q=0;
    if(p < r){
        q = ( p + r ) / 2;
        mergeSort(arreglo,p,q);
        mergeSort(arreglo, q + 1 ,r);
        merge_sort(arreglo,p,q,r);
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
    mergeSort(arreglo,0,n);
    cout<< "******" << endl;
    for(int i=0;i<=n;i++){
        cout<<arreglo[i]<<endl;
    }
    return 0;


}
