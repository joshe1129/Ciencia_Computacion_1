#include <iostream>

using namespace std;

/*
int main()
{
     MULTIPLICACION DE MATRICES ********
    int x,y,w,z;
    cout<<"INGRESE LA FILA Y COLUMNA DE LA PRIMERA MATRIZ"<<endl;
    cin>>x;
    cin>>y;
    cout<<"INGRESE LA FILA Y COLUMNA DE LA SEGUNDA MATRIZ"<<endl;
    cin>>w;
    cin>>z;
    if(y!=z)
        cout<<"las matrices no se podran multiplicar"<<endl;
    else{
        int mat_a[x][y], mat_b[w][z], mat_c[y][z];
        cout<<"INGRESE EL VALOR DE LA PRIMERA MATRIZ"<<endl;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++){
                cout<<"mat_A["<<i<<"]"<<"["<<j<<"]"<<endl;
                cin>>mat_a[i][j];
            }
        }
        cout<<"INGRESE EL VALOR DE LA SEGUNDA MATRIZ"<<endl;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++){
                cout<<"mat_b["<<i<<"]"<<"["<<j<<"]"<<endl;
                cin>>mat_b[i][j];            }
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=z;j++){
                mat_c[i][j]=0;
                for(int k=1;k<=x;k++)
                    mat_c[i][j]=mat_c[i][j]+mat_a[i][k]*mat_b[k][j];
            }
        }
        cout<<"La MULTIPLICACION DE LAS MATRICES ES:";
        for(int i=1;i<=y;i++)
        {
            cout<<endl;
            for(int j=1;j<=z;j++){
                cout<<"["<<mat_c[i][j]<<"]";

            }
        }
    }
}
    *************  */
    int suma(const int *arreglo,const int tam)
    {
        int sum=0;
        for(int i=0;i<=tam;i++){
            sum= sum + *arreglo;//sum= sum + *(arreglo+i)//sum+=*arreglo+i++
            arreglo++;
        }
        return sum;

    }

    float promedio(const int *arreglo,const int tam)
    {
        return (float) suma(arreglo,tam)/tam;
    }
    /*
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
*/
int main()
{
    int n;
    cout<<"ingresa la cantidad de elementos del arreglo:";
    cin>>n;
    int arreglo[n];
    cout<<"ingresa los elementos del arreglo:"<<endl;
    for(int i=0;i<=n;i++){
            cin>>arreglo[i];
    }
    cout<<"la suma de los elementos es:"<<suma(arreglo,n)<<endl;
    cout<<"el promedio de los elementos es:"<<promedio(arreglo,n)<<endl;
    /*invertir(arreglo,n);
    ordenar(arreglo,n);
    char cadena[]="hola mundo";
    cout<<"tamaño de la cadena:"<<t_cadena(cadena);*/


}



