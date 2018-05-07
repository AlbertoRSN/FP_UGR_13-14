/*
Cuantas veces aparece el numero 9 en todos los numero que hay entre el 1 y el 100? ej: El 9 aparece 1 vez en el 19 y 92 y dos
veces en el 99.

Construir un programa que lea tres enteros cifra (entre 1 y 9) min y max y calcule el numero de apariciones del digito cifra en los numeros
contenidos en el intervalo cerrado [min,max]

*/


#include <iostream>

using namespace std;

int main(){

    int cifra, mini, maxi, der, izq;
    //bool es_igual_a_cifra=false;

    do{
    cout<<"Introduce una cifra entre el 1-9: ";
    cin>>cifra;
    }while(cifra<1 || cifra>9);

    do{
    cout<<"Introduce el minimo: ";
    cin>>mini;

    cout<<"Introduce el maximo: ";
    cin>>maxi;
    }while(mini<1 && maxi>=100);

    for(int i=mini; i<=maxi; i++){
        izq=i/10;
        der=i%10;

        if(izq==cifra && der!=cifra){
            //es_igual_a_cifra=true;
            cout<<"el "<<cifra<<" aparece 1 vez en el "<<i<<"\n";
    }
        if(der==cifra && izq!=cifra){
            //es_igual_a_cifra=true;
            cout<<"el "<<cifra<<" aparece 1 vez en el "<<i<<"\n";
        }

        if(der==cifra && izq==cifra){
           // es_igual_a_cifra=true;
            cout<<"el "<<cifra<<" aparece 2 veces en el "<<i<<"\n";

        }
    }

}
