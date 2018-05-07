#include <iostream>

using namespace std;

int main()
{
    //Declaración de variables
    int i=1, numeroLineas, limiteCaracteres, espacios=1, imprimeHastaNueve=0, numerosPorLinea;

    //Filtro para lectura de número de líneas
    do
    {
        cout << "Número de líneas del triángulo (mayor que 0): ";
        cin >> numeroLineas;
    }
    while(numeroLineas<=0);

    //Bucle de control de fin de programa
    for(i; i<=numeroLineas; i++)
    {
        //Espacios antes de cada línea
        espacios=i;
        //Números que entrarán en cada línea
        numerosPorLinea=i;
        //Límite de caracteres por línea
        limiteCaracteres=(i*2)-1;

        //Bucle para los espacios
        for(; espacios<numeroLineas; espacios++)
            cout << " ";

        //Bucle para imprimir los caracteres desde el principio de línea hasta el centro del triángulo
        for(; numerosPorLinea<=limiteCaracteres; numerosPorLinea++)
        {
            imprimeHastaNueve++;
            if(imprimeHastaNueve>9)
                imprimeHastaNueve=0;
            cout << imprimeHastaNueve;
        }

        //Bucle para imprimir los caracteres a partir del centro del triángulo hasta el final de línea
        for(; numerosPorLinea>i+1; numerosPorLinea--)
        {
            imprimeHastaNueve--;
            if(imprimeHastaNueve<0)
                imprimeHastaNueve=9;
            cout << imprimeHastaNueve;
        }

        cout << endl;
    }
}
