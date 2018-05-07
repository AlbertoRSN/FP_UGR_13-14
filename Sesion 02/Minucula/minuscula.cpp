/* Alberto Rodriguez Santana, 1º, D1.
Programa que pasa de una letra mayuscula a una letra minuscula */

#include <iostream>

using namespace std;
int main()
{
    int num;
    char mayuscula=0;
    char minuscula;
    num = 'a'-'A';

    {
    cout<<"Introduce la letra mayuscula: ";
    cin>>mayuscula;
    }
    minuscula = mayuscula + num;

    cout<<"La letra mayuscula es ahora una: "<<minuscula;
}
