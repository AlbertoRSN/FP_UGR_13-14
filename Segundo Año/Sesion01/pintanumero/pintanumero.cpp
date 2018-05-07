/* ****************************************************************************************************
********************************DNI: 48950011-P********************************************************
************************** Alberto Rodriguez Santana **************************************************
*********************************** Grupo D1 **********************************************************
_______________________________________________________________________________________________________

En este programa tras introducir un numero de tres digitos lo que vamos a hacer es imprimirlo en pantalla
con 3 espacios entre cada digito, para ello usamos el modulo y la division para separar cada uno de los
digitos.
_______________________________________________________________________________________________________
*/

#include <iostream>

using namespace std;

int main()
{
    int numero, a, b, c; //declaracion de cada una de las variables.

    cout<<"introduce un numbero de 3 digitos: ";
    cin>>numero;

    a = numero/100; //nos quedamos con el primer digito.
    b = (numero % 100) / 10; // usamos el resto del primer digito para quedarnos con el segundo.
    c = (numero % 10) / 1; //al igual que el caso anterior, separamos el 3er digito.

    cout<<a<<"   "<<b<<"   "<<c; //imprimimos por pantalla los digitos separados por 3 espacios.
}
