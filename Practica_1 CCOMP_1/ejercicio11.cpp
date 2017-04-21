/*  Implemente una función para la multiplicación dos matrices, no necesariamente cuadradas. -JOSE SALINAS- */
#include <iostream>

using namespace std;

int main()
{
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
