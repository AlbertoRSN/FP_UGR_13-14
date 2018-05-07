/*Alberto Rodríguez Santana
Programa que consiste en el cambio del caracter que introducimos
por su mayuscula o su minuscula, y cuando no sea un caracter alfabetico,
el programa nos imprime el mismo caracter introducido.*/


#include <iostream>

using namespace std;

int main()
{
    //Asignamos variables.
    char letra_original;
    char letra_convertida;
    const int distancia_may_min = 'a'-'A';
    bool es_mayuscula=true;
    bool es_minuscula=true;

    cout<< "Introduzca una letra: ";
    cin>> letra_original;

    es_mayuscula=(letra_original >= 'A') && (letra_original <= 'Z');
    es_minuscula=(letra_original >= 'a') && (letra_original <= 'z');

    //Añadimos las condicion para que el programa nos imprima la letra minuscula de la letra_original.
        if ((letra_original >= 'A') && (letra_original <= 'Z'))
        {
        letra_convertida=letra_original+distancia_may_min;
        cout << letra_convertida;
        es_mayuscula=true;
        es_minuscula=false;
        }
        else
        {
        es_mayuscula=false;
        es_minuscula=true;
    }
    //Añadimos las condicion para que el programa nos imprima la letra mayuscula de la letra_original.
    if ((letra_original >= 'a') && (letra_original <= 'z'))
      {
        letra_convertida=letra_original-distancia_may_min;
        cout << letra_convertida;
        es_mayuscula=false;
        es_minuscula=true;
      }
    else
    {
        es_mayuscula=true;
        es_minuscula=false;
    }


}
