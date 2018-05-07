/* ****************************************************************************************************
********************************DNI: 48950011-P********************************************************
************************** Alberto Rodriguez Santana **************************************************
*********************************** Grupo D1 **********************************************************
_________________________________________________________________________________________________________

Programa con el que vamos a calcular de la ganancia total de la venta de un producto, cual es la cantidad
que gana cada una de las partes implicadas, cobrando el diseñador del producto el doble de lo que cobra
cada uno de los fabricantes (3).
_________________________________________________________________________________________________________
*/


#include <iostream>

using namespace std;

int main()
{
    double ganancia_tot; // Ganancia total del producto
    double partes; // Segun la ecuacion que usamos, el diseñador cobra 1 y cada fabricante 0.5
    double cobro_dis; // Cobro del diseñador.
    double cobro_fab; // Cobro del fabricante.

    cout<<"Introduce la ganancia total obtenida con la venta del producto: ";
    cin>>ganancia_tot;

    partes = 1 + 0.5 * 3; //1 es lo que cobra el diseñador, y 1/2 lo que cobra cada fabricante.
    cobro_dis = ganancia_tot / partes;
    cobro_fab = cobro_dis / 2;

    cout<<"\n El diseniador cobra: " << cobro_dis<<" Euros.\n";
    cout<<"\n Cada fabricante cobra: "<<cobro_fab<<" Euros."<<endl;
}
