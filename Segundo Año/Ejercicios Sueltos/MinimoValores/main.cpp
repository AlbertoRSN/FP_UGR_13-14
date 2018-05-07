/*

Calcular el minimo de varios valores leidos desde teclado, e indicar en que posicion se introdujo, terminar con 0.

*/

#include <iostream>

using namespace std;

int main()
{
  int dato, contador=0, posicion=0, minimo;
  const int FIN=0;

    cout<<"Introduce un numero: ";
    cin>>dato;

    while(dato!=FIN){

        minimo=dato;
        posicion=posicion+1;
        contador++;

        cout<<"Introduce un numero: ";
        cin>>dato;

        if(dato<minimo && dato!=FIN)
            minimo=dato;

    }

    cout<<" Ha introducido "<<contador<<" valores. \n El minimo es: "<<minimo<<"\n Se ha introducido en la posicion: "<<posicion;

}


/*

    while(entero!=0){

        posicion=posicion+1;

        if(min>entero){
            min=entero;
            posicion=contador;

    }
