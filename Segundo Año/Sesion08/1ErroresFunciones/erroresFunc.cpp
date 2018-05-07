#include <iostream>

using namespace std;

//Funciones oiginales.
int ValorAbsoluto (int entero){
    if (entero < 0)
        entero = -entero;

    else return entero;
}

void Cuadrado (int entero){
    return entero*entero;
}

void Imprime(double valor){
    double valor;
    cout << valor;
}

bool EsPositivo(int valor){
     if (valor > 0)
        return true;
}


//Funciones corregidas.
int ValorAbsoluto (int entero){
    if (entero < 0)
        entero = -entero;

    return entero;
}

int Cuadrado (int entero){
    return entero*entero;
}

void Imprime(double valor){
    cout << valor;
}

bool EsPositivo(int valor){
    bool EsPositivo = false;

     if (valor > 0)
        EsPositivo=true;

        return EsPositivo;
}

