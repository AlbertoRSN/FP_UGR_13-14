/* ****************************************************************************************************
********************************DNI: 48950011-P********************************************************
************************** Alberto Rodriguez Santana **************************************************
*********************************** Grupo D1 **********************************************************
_______________________________________________________________________________________________________

Con este programas vamos a hacer un intercambio de datos usando un auxiliar.
_______________________________________________________________________________________________________
*/

#include <iostream>

using namespace std;

int main()
{
    int edad_Juan, edad_Pedro, aux;

    cout<<"Introduce la edad de Juan: ";
    cin>>edad_Juan;

    cout<<"Introduce la edad de Pedro: ";
    cin>>edad_Pedro;

    aux = edad_Pedro; //en auxiliar metemos la edad de pedro.
    edad_Pedro = edad_Juan; //en la variable edad_Pedro guardamos la edad de juan.
    edad_Juan = aux; // y terminamos de intercambiar introduciendo el contenido de aux en edad_Juan

    cout<<"\nAhora la edad de Pedro es: " << edad_Pedro<< " anios\n";
    cout<<"\nY la edad de Juan ahora es: "<< edad_Juan<<" anios"<<endl;
}
