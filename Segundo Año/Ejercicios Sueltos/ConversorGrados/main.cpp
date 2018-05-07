/*
Realizar un programa que presente una tabla de conversion de grados C a grados Fahrenheit (F=9/5C+32) desde
los -10 grados a los 100, con intervalos de 2 grados.

*/

#include <iostream>

using namespace std;

int main()
{
    int gradosC;
    double gradosF;

        for(gradosC=-11; gradosC<100; gradosC++){
            gradosC=gradosC+1;
            gradosF=((9.0/5)*gradosC+32);
            cout<<"\n"<<gradosC<<" Grados C, son: "<<gradosF<<" Grados F.\n";
        }
}
