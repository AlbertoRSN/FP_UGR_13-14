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

int tope, divisor; //Variables.

cout<<"Introduce un numero: "; //Lectura anticipada.
cin>>tope;



    for(divisor=1; divisor<=tope; divisor++){
        if(tope%divisor==0)
            cout<<divisor<<" es divisor."<<endl;

    }




}
