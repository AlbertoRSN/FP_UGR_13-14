#include <iostream>

using namespace std;

int main()
{
    char letra_original;
    char letra_convertida;
    const int distancia_may_min = 'a'-'A';

    cout<< "Introduzca una letra: ";
    cin>> letra_original;

    if ((letra_original >= 'A') && (letra_original <= 'Z'))
    {
        letra_convertida=letra_original+distancia_may_min;
        cout<< "La letra introducida es mayuscula.";
    }
    else{
        cout<< "Letra introducida no es mayuscula.";
    }

}
