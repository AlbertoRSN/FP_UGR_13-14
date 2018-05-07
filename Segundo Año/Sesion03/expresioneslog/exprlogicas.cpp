#include <iostream>

using namespace std;

int main()
{
 //1. Escribir expresion logica que sea true si una letra introducida es minuscula.
  char letra;
  bool minusSI=false;
  int entero;

  cout<<"introduce una letra: ";
  cin>>letra;

  entero = letra;

  if(entero>= 97 && entero <=122){
        minusSI;

        cout<<minusSI<<"\nLa letra introducida es minuscula.";
  }
  else if(entero>=65 && entero<=90){
        minusSI=true;
        cout<<"La letra introducida es mayuscula.";
  }

  else
        cout<<"No ha introducido una letra de la a-z.\n";


  //2. Comprobar si una varable de tipo entero llamada edad es menor de 18 o mayor de 75.

    int edad;

    cout<<"\nIntroduce la edad para entrar al local: ";
    cin>>edad;

    if(edad<18 || edad>65)
        cout<<"No puedes pasar, debes crecer un poco mas. ";
    else
        cout<<"Cumples con los requisitos para entrar, adelante.";

    // 3. Expr. logica para saber si un año es bisiesto.

    int anio;

    cout<<"\n Introduce un anio para comprobar si es bisiesto: ";
    cin>>anio;

        if(anio%4 == 0 && anio%100!=0)
            cout<<"El anio introducido es bisiesto.";
        else
            cout<<anio<<" es un anio normal. ";
}
