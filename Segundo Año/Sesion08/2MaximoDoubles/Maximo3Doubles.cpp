#include <iostream>

using namespace std;

double Max(double un_valor, double otro_valor, double el_tercero){
    double maximo;

    if(un_valor>otro_valor && un_valor>el_tercero)
        maximo=un_valor;

    if(otro_valor>un_valor && otro_valor>el_tercero)
        maximo=otro_valor;

    if(el_tercero>un_valor && el_tercero>otro_valor)
        maximo=el_tercero;


    return maximo;
}


int main()
{
    double valor1, valor2, valor3, resultado;

    cout<<"Introduce el 3 valores: ";
    cin>>valor1>>valor2>>valor3;

    resultado=Max(valor1, valor2, valor3);

    cout<<"\nEl maximo de los tres valores introducidos es: "<<resultado<<".\n";

}
