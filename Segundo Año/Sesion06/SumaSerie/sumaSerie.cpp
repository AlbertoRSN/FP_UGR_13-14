/* ****************************************************************************************************
********************************DNI: 48950011-P********************************************************
************************** Alberto Rodriguez Santana **************************************************
*********************************** Grupo D1 **********************************************************
_______________________________________________________________________________________________________

Diseñar un programa para calcular la suma de los 100 primeros términos de la sucesión siguiente:
ai =(−1)^i(i2 −1) / 2i
No puede usarse la función pow. Hacedlo calculando explícitamente, en cada iteración, el valor (−1)i
(usad un bucle for). Posteriormente, resolvedlo calculando dicho valor a partir del calculado en la
iteración anterior, es decir, (−1)^i−1.
_______________________________________________________________________________________________________
*/

#include <iostream>

using namespace std;

int main()
{
    int ex=-1, res=0;

    for(int i=1; i<=100; i++){
        ex=(-ex)*i;
        res=(ex*((i*i)-1))/2*i;

    cout<<" "<<res<<"\n ";
    }
}
