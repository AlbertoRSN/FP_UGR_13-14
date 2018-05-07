/*
Escribo un programa que imprima las parejas que puede formarse con los dos conjuntos de caracteres siguientes val1..val2 y vale3 vale4,
donde los cuatro valores deben leerse desde teclado. Caracteres.
*/


#include <iostream>

using namespace std;

int main()
{
    char val1, val2, val3, val4;

        cout<<"Introduce caracter 1: ";
        cin>>val1;

        cout<<"Introduce caracter 2: ";
        cin>>val2;

        cout<<"Introduce caracter 3: ";
        cin>>val3;

        cout<<"Introduce caracter 4: ";
        cin>>val4;

        for(char i=val1; i<=val2; i++){
            cout<<" "<<i;

            for(char j=val3; j<=val3; j++){
                cout<<j;
            }


        }
}
