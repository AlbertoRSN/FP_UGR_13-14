#include <iostream>

using namespace std;

int main()
{
    double intensidad, resistencia, voltaje;

    cout<<"Introduce el valor de la Intensidad: ";
    cin>>intensidad;

    cout<<"Introduce el valor de la resistencia: ";
    cin>>resistencia;

    voltaje=intensidad*resistencia;

    cout<<"El voltaje producto de aplicar la Ley de Ohm con respecto a la intensidad y resistencia es: "<<voltaje<<" Voltios."<<endl;


}
