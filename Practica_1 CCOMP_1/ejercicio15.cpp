/*Escriba una función que evalue una cadena de caracteres y retorne true si la cadena
representa un palindrome y false en caso contrario -Jose Salinas-*/
#include <iostream>

using namespace std;

bool palindrome(const string& cadena)
{
    if (cadena.empty())
        return false;

    int i = 0;                // first characters
    int j = cadena.length() - 1; // last character

    while (i < j)
    {
        if (cadena[i] != cadena[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string cadena;
    cout<<"ingrese una palabra";
    cin >> cadena;
    if(palindrome(cadena)==true)
        cout<<"true";
    else
        cout<<"false";
}
