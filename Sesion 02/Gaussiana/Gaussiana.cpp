/*
Alberto Rodriguez Santana
Grupo D1
*/
#include <iostream>
using namespace std;
int main()
    double x, desv, esp, gaussiana;

    cout<<"Introduce el valor de la abcisa: ";

    gaussiana=(1/(desv*sqrt(2*PI)))*exp((-1/2)*pow(((x-esp)/desv),2));
    cout<<"El resultado de la ecuacion gaussiana es: "<<gaussiana;
}