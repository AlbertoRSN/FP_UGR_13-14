/* ****************************************************************************************************
********************************DNI: 48950011-P********************************************************
************************** Alberto Rodriguez Santana **************************************************
*********************************** Grupo D1 **********************************************************
_______________________________________________________________________________________________________
23. Supongamos una serie numérica cuyo término general es: ai = a1ri−1
Se pide crear un programa que lea desde teclado r, el primer elemento a1 y el tope k y calcule la suma
de los primeros k valores de la serie.

Se proponen dos alternativas:

a) Realizad la suma de la serie usando la función pow para el cómputo de cada término ai.
 Los argumentos de pow no pueden ser ambos enteros, por lo que forzaremos a que la base (por ejemplo)
 sea double, multiplicando por 1.0.

b) Si analizamos la expresión algebraica de la serie numérica, nos damos cuenta que
es una progresión geométrica ya que cada término de la serie queda deﬁnido por la siguiente expresión:
 ai+1 = ai*r Es decir, una progresión geométrica es una secuencia de elementos en la que cada uno de
 ellos se obtiene multiplicando el anterior por una constante denomi- nada razón o factor de la
 progresión. Cread el programa pedido usando esta fórmula. NO puede utilizarse la función pow.
_______________________________________________________________________________________________________
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

int a1=0, k=0, r=0;
double resultado=0, aux=0;

    cout<<"Introduce el primer elemento (a1): ";
    cin>>a1;

    cout<<"Introduce el tope (k): ";
    cin>>k;

    cout<<"Dame la razon (r): ";
    cin>>r;
//FORMULA USANDO POW
        /*for (int i=1; i<=k; i++ )
            resultado=a1*pow(r, i-1)*1.0;
*/


//PROGRESION SIN USAR LA FUNCION POW.
for(int i=0; i<=k; i++){
    aux=a1+i;
    aux=a1*r;
    resultado=aux;
}
    cout << "El resultado es " << resultado << "\n";
}



