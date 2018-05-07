/*Alberto Rodríguez Santana
Programa que nos va a imprimir en pantalla el numero de divisores
que tiene un numero que le introduzcamos.*/


#include <iostream>

using namespace std;

int main()
{
    int tope;
    int long i;
    int divisor;
    bool divisorsi=false;

    do{
    cout<<"Introduce un numero para calcular sus divisores: ";
    cin>>tope;
    }while(tope<=0);

    for(i=1; i<=tope; i++){

            divisor=tope%i;

        if(divisor == 0){

            divisorsi=true;

        }

        else {

            divisorsi=false;
        }

    }

    if(divisorsi){

        cout<<i<<" es divisor de "<<tope<<endl;

    }

}

