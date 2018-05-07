/* ****************************************************************************************************
********************************DNI: 48950011-P********************************************************
************************** Alberto Rodriguez Santana **************************************************
*********************************** Grupo D1 **********************************************************
_______________________________________________________________________________________________________

Con este programas vamos a calcular la media y la desviacion tipica sobre la altura de tres personas
usando las formulas adecuadas para ello.
_______________________________________________________________________________________________________
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a1, a2, a3; //definicion de las 3 alturas.
    double media, desviacion;

    cout<<"Introduce la altura de cada persona (a1,a2,a3): \n";
    cin>>a1>>a2>>a3;

    media = 0.3 * (a1 + a2 + a3); //formula de la media.

    desviacion = sqrt(0.3*(((a1-media)*(a1-media)) + ((a2-media)*(a2-media)) + ((a3-media)*(a3-media)))); //formula desviacion.

    cout<<"La media es: " <<media<<" y la desviacion tipica: "<<desviacion;

}
