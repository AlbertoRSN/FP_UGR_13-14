/* ****************************************************************************************************
********************************DNI: 48950011-P********************************************************
************************** Alberto Rodriguez Santana **************************************************
*********************************** Grupo D1 **********************************************************
_______________________________________________________________________________________________________

20.Calcular mediante un programa en C++ la función potencia xn, y la función factorial n! con n un valor
entero y x un valor real.No pueden usarse las funciones de la biblioteca cmath. El factorial
de un entero n se deﬁne de la forma siguiente:

0! = 1
n! = 1×2×3×···n, ∀n ≥ 1

Finalidad: Trabajar con bucles controlados por contador. Diﬁcultad Baja.
_______________________________________________________________________________________________________
*/

#include <iostream>

using namespace std;

int main()
{
    int num, potencia, fact=1, solucion=1, base;

    cout<<"---CALCULO DE FUNCION POTENCIA----\n\n";
    cout<<"Introduce un numero como base: ";
    cin>>base;
    cout<<"Introduce la potencia: ";
    cin>>potencia;

    for(int i=1; i<=potencia; i++)
        solucion=base*solucion;


    cout<<"La funcion potencia es igual a: "<<solucion<<" \n";

    cout<<"\n\n-------------------------------------------------------------\n\n";

    cout<<"---CALCULO DEL FACTORIAL----\n\n";
    cout<<"\nIntroduce el numero para calcular su factorial: ";
    cin>>num;

    for(int i=2; i<=num; i++)
        fact = fact * i;

    cout<<"El factorial de "<<num<<" es "<<fact;

}
