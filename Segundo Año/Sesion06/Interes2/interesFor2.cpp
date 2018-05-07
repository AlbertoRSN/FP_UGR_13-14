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
    int i;
    cout << "Capital depositado: ";
    cin >> capital;
    cout << "Introduzca el interes: ";
    cin >> interes;

for(i=0; i<=2*capital; i++){
    total = capital + (capital * interes/100);
    total = total + total * i;
    }

    cout<<"\n En el anio " << i << " se habra duplicado el capital y el total sera de: " << total<<"\n"<<endl;

}
