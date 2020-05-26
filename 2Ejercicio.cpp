/*Realice un programa en C++ que verifique si un numero es par o impar.*/

#include "iostream"

using namespace std;

int main()
{
    int numero;

    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    if(numero == 0)
    {
        cout<<"El numero es cero."<<endl;
    }
    else if(numero % 2 ==0)
    {
        cout<<numero<<" Es par."<<endl;
    }
    else
    {
        cout<<numero<<" Es impar."<<endl;
    }
    return 0;
}