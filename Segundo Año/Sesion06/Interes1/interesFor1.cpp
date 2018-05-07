/* ****************************************************************************************************
********************************DNI: 48950011-P********************************************************
************************** Alberto Rodriguez Santana **************************************************
*********************************** Grupo D1 **********************************************************
_______________________________________________________________________________________________________

24. Reescribid la solución a los ejercicios 12 (divisores) y 15 (interés) usando un bucle for.
Finalidad: Familiarizarnos con la sintaxis de los bucles for. Diﬁcultad Baja.
_______________________________________________________________________________________________________
*/

#include <iostream>

using namespace std;

int main(){
     double capital;
     double interes;
     double total;
     double anios;

    cout << "Número de años: ";
    cin >> anios;
    cout << "Capital depositado: ";
    cin >> capital;
    cout << "Introduzca el interes: ";
    cin >> interes;

for(int i=1; i<=anios; i++)
{
    if(i=1){
        total=capital;
        i++;
    }
    else
        total = capital + (capital*interes/100);

    cout<<"\n Total en el anio " << i << " es " << total<<"\n"<<endl;
    }

}
