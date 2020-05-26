/*Realice un programa en C++ que verifique si un numero es divisible entre otro.*/

#include "iostream"

using namespace std;

int main()
{
    int a,b;

    cout<< "Ingrese el numero mayor: "<<endl;
    cin>>a;
    cout<< "Ingrese el numero menor: "<<endl;
    cin>>b;

    if (a % b ==0)
    {
        cout << a << " Es divisible entre:  "<<b <<endl; 
    }
    else
    {
        cout << a << " No es divisible entre: "<<b <<endl;
    }
    

    return 0;
}