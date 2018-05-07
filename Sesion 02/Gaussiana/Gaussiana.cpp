/*
Alberto Rodriguez Santana
Grupo D1Programa que nos dara el resultado de hacer la ecuacion gaussiana.
*/
#include <iostream>#include <cmath>
using namespace std;
int main(){
    double x, desv, esp, gaussiana;    const double PI=3.1416;

    cout<<"Introduce el valor de la abcisa: ";    cin>>x;    cout<<"Introduce de nuevo el valor de la desviacion tipica: ";    cin>>desv;    cout<<"Introduce el valor de la esperanza de vida: ";    cin>>esp;

    gaussiana=(1/(desv*sqrt(2*PI)))*exp((-1/2)*pow(((x-esp)/desv),2));
    cout<<"El resultado de la ecuacion gaussiana es: "<<gaussiana;
}
