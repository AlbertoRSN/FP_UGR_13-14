#include <iostream>

using namespace std;

int main()
{
    //Declaraci�n de variables
    int i=1, numeroLineas, limiteCaracteres, espacios=1, imprimeHastaNueve=0, numerosPorLinea;

    //Filtro para lectura de n�mero de l�neas
    do
    {
        cout << "N�mero de l�neas del tri�ngulo (mayor que 0): ";
        cin >> numeroLineas;
    }
    while(numeroLineas<=0);

    //Bucle de control de fin de programa
    for(i; i<=numeroLineas; i++)
    {
        //Espacios antes de cada l�nea
        espacios=i;
        //N�meros que entrar�n en cada l�nea
        numerosPorLinea=i;
        //L�mite de caracteres por l�nea
        limiteCaracteres=(i*2)-1;

        //Bucle para los espacios
        for(; espacios<numeroLineas; espacios++)
            cout << " ";

        //Bucle para imprimir los caracteres desde el principio de l�nea hasta el centro del tri�ngulo
        for(; numerosPorLinea<=limiteCaracteres; numerosPorLinea++)
        {
            imprimeHastaNueve++;
            if(imprimeHastaNueve>9)
                imprimeHastaNueve=0;
            cout << imprimeHastaNueve;
        }

        //Bucle para imprimir los caracteres a partir del centro del tri�ngulo hasta el final de l�nea
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
