#include <iostream>
using namespace std;

int main(){

int tope, divisor; //Variables.

cout<<"Introduce un numero: "; //Lectura anticipada.
cin>>tope;

    divisor=1; //inicializamos a 1 el divisor para que se cumpla la condicion del if la primera vez.

    do{
        if(tope%divisor==0)
            cout<<divisor<<" es divisor."<<endl;

            divisor++; //incrementamos contador.

    }while(tope>=divisor);

}
