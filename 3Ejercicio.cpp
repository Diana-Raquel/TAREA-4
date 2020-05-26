/*Realice un programa en C++ que verifique si un numero es positivo, negativo o cero.*/

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
    else if(numero > 0)
    {
        cout<<numero<<" Es positivo"<<endl;
    }
    else if (numero < 0)
    {
        cout<<numero<<" Es negativo."<<endl;
    }
    return 0;
}