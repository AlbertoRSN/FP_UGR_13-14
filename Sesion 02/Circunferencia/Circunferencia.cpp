/*Programa para calcular la longitud y
el area de una circunferencia
Alberto Rodriguez
09/10/2013*/

#include <iostream>

using namespace std;

int main()
{
    double r, longitud, area;
    const float pi=3.1416;

    cout<< "Introduce el valor del radio de la circunferencia: ";
    cin>>r;
    longitud=2*pi*r;
    area=pi*r*r;
    cout<< "La longitud de la circunferencia de radio " << r << " es: " << longitud << endl;
    cout<< "El area de la circunferencia de radio " << r << " es: " << area << endl;


}
