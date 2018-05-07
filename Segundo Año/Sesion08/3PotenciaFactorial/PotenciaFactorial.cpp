#include <iostream>

using namespace std;

int Factorial(int n){

    int resultado=1;

    for(int i=1; i<=n; i++)
        resultado=resultado*i;


    return resultado;
};

int Potencia(int base, int exponente){

    int resultado=1;

    for(int i=1; i<=exponente; i++)
        resultado=resultado*base;


    return resultado;

};



int main()
{
    int base, potencia;
    int numero;

    cout<<"------------FACTORIAL---------------\n\n";

    cout<<"Introduce numero para calcular el factorial: ";
    cin>>numero;

    cout<<"\nEl factorial de "<<numero<<" es: "<<Factorial(numero);

    cout<<"\n\n------------POTENCIA----------------\n\n";

    cout<<"Introduce la base: ";
    cin>>base;

    cout<<"Introduce el exponente: ";
    cin>>potencia;

    cout<<"\nEl resultado de "<<base<<" elevado a "<<potencia<<" es: "<<Potencia(base,potencia)<<endl;

}
