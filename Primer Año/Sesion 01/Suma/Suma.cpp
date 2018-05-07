/* Programa para calcular la suma de dos numeros */
#include <iostream> //cout, cin, endl
using namespace std;
int main()
{
    double dato1;
    double dato2;
    double dato3;

    cout<< "Introduzca el dato 1: ";
    cin>> dato1;
    cout<< "Introduzca el dato 2: ";
    cin>> dato2;
    cout<< "Introduzca el dato 3: ";
    cin>> dato3;

    double suma;
    suma= dato1+dato2+dato3;

    cout<< "Resultado de la suma de "
        << dato1 << " con " << dato2 << " con " << dato3 << ": " << suma << endl;
}
