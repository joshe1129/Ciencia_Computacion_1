#include <iostream>

using namespace std;

int main()
{
    int primo,val,var, cont=0;;
    val=0;
    primo=1;
    cout<<"ingrese un numero: ";
    cin>>var;
    for(int i=1;i<=var;i++){

        for(int j=1;j<=i;j++){
            if((i%j)==0)
                val++;
        }
        if(val==2){
            primo=i;
            cout<<primo<<endl;
        }
        val=0;
    }
    for(int i=1;i<=var*var;i++){
        for(int j=1;j<=i;j++){
            if((i%j)==0)
                val++;
        }
        if(val==2){
            primo=i;
            cont++;
            if(cont==var)
                cout<<"el numero primo:"<<var<<"es "<< primo<<endl;
        }
        val=0;


    }


}
