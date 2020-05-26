/*Realice un programa en C++ que verifique si la palabra ingresada inicia  y finaliza con la misma letra*/

#include "conio.h"
#include "string"
#include <iostream>

using namespace std;
 
int main()
{
    string palabra;
    int longitud=0;
    int tamano;

    cout<<"Ingrese su palabra"<<endl;
    cin>>palabra;

    longitud=palabra.length();

    cout <<"Tu palabra es: "<<endl<<palabra <<endl;
    cout<< "Tu letra inicial es: " << palabra[0]<<endl<<endl;
    cout<<"La ultima letra es: " << palabra.at(longitud-1);
    cout<< endl<<endl;

    if (palabra[0]==palabra.at(longitud-1))
    cout<<"Las palabras de inicio: "<<palabra[0] <<" y final: "<<palabra.at(longitud-1)<<" son las mismas"<<endl;
    else
    {
    cout<<"Las palabras de inicio: "<<palabra[0]<<" y final "<<palabra.at(longitud-1)<<" son diferentes"<<endl<<endl;
    }
    cout<<endl<<endl;
    return 0;
}