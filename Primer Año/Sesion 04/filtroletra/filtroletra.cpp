#include <iostream>

using namespace std;

int main()
{
    //Asignamos variables.
    char letra_original;
    char letra_convertida;
    const int distancia_may_min = 'a'-'A';
    const int dist2 = 'A'-'Z';
    bool es_mayuscula=true;
    bool es_minuscula=true;

do{
    cout<<"Introduce una letra mayuscula: ";
    cin>>letra_original;
}while(letra_original!=dist2);


    es_mayuscula=(letra_original >= 'A') && (letra_original <= 'Z');
    es_minuscula=(letra_original >= 'a') && (letra_original <= 'z');

    //Añadimos las condicion para que el programa nos imprima la letra minuscula de la letra_original.
        if ((letra_original >= 'A') && (letra_original <= 'Z'))
        {
        letra_convertida=letra_original+distancia_may_min;
        cout << letra_convertida;
        es_mayuscula=true;
        }
        else
        {
         es_minuscula=true;
    }
    //Añadimos las condicion para que el programa nos imprima la letra mayuscula de la letra_original.
    if ((letra_original >= 'a') && (letra_original <= 'z'))
      {
        letra_convertida=letra_original-distancia_may_min;
        cout << letra_convertida;

        es_minuscula=true;
      }
    else
    {
        es_mayuscula=true;

    }


}
