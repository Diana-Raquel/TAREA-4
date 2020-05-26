/*Realice un programa en C++ que verifique si la palabra ingresada es mayor a 10 caracteres 
y si la longitud es par o impar.*/

#include "iostream"
#include "string.h"

using namespace std;

int main()
{
    string palabra;
    int tamano;

    cout<<"Ingrese la palabra: "<<endl;
    cin>>palabra;

    if (palabra.length()>10)
    {
        cout << palabra << " Es mayor a 10 caracteres  "<<endl; 
    }
    else
    {
        cout << palabra << " es menor a 10 caracteres "<<endl;
    }    

    tamano = palabra.length();
    cout<< palabra <<" Tiene "<<tamano<<" letras"<<endl;

     if(tamano % 2 ==0)
    {
        cout<<palabra<<" Es par."<<endl;
    }
    else
    {
        cout<<palabra<<" Es impar."<<endl;
    }

    return 0;
}