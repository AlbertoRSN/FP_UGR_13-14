#include <iostream>

using namespace std;

int main()
{
    int valor1, valor2;

    cout<<"Introduce el valor 1: ";
    cin>>valor1;

    cout<<"Introduce el valor 2: ";
    cin>>valor2;

    if(valor1%valor2 == 0 || valor2%valor1==0)
        cout<<"\n Valor1 y valor 2 SI se dividen de forma entera. ";
    else
        cout<<"\n Valor1 y valor2 NO se dividen de forma entera. "<<endl;
}
