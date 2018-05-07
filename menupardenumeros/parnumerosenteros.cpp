/*Alberto Rodríguez Santana.

PARNUMEROSENTEROS

*/

#include <iostream>

using namespace std;

  //---------------------------------PROTOTIPOS----------------------------------------//


 void mostrarMenu(); //muestra el menu.
 int leerNumero();//leemos y filtramos la entrada de numeros.
 int leerOpcion();//leemos y filtramos la opcion elegida.
 int Suma(int num1, int num2);//funcion que hara la suma.
 int Producto(int num1, int num2);


int main()
{
    const int FIN=4;
    int num1, num2;
    int opcion=0;
    bool datosSi=false;
    int resultado;




    while(opcion!=FIN){

    mostrarMenu();
    opcion=leerOpcion();

    switch(opcion){

    case '1'://opcion 1
        num1=leerNumero();
        num2=leerNumero();
        datosSi=true;
        break;

    case '2'://opcion 2
        if(datosSi){
            resultado=Suma(num1, num2);
            cout<<"\n El resultado de sumar " <<num1<<" y "<<num2<<" es: "<<resultado<<"\n";
        }
        else {
            cout<<"\n ******** Debe elegir antes la opcion numero '1' *********\n";
        }
        break;
    case '3'://opcion 3
        if(datosSi){
            resultado=Producto(num1, num2);
            cout<<"\n El resultado del producto de " <<num1<<" y "<<num2<<" es: "<<resultado;
        }

        else {
            cout<<"\n ******** Debe elegir antes la opcion numero '1' *********\n";
        }

    }//Switch


}//while

    cout<<"\n Has elegido salir."<<endl;
    cout<<"*****************!HASTA PRONTO!********************"<<endl;

}

//---------------------------------IMPLEMENTACION-------------------------------------//


void mostrarMenu(){
    cout<<"\n**-------------------------------**"<<endl;
    cout<<"\n 1. Leer dos numeros enteros. "<<endl;
    cout<<"\n 2. Sumar. "<<endl;
    cout<<"\n 3. Producto. "<<endl;
    cout<<"\n 4. Salir."<<endl;
    cout<<"\n**-------------------------------**"<<endl;
}

int leerOpcion(){
    char opcion;
    do{
    cout<<"\n Elige una opcion: ";
    cin>>opcion;
    }while(opcion<'1' || opcion>'4');
    return opcion;
}

int leerNumero(){
    int num;
    do{
    cout<<"Introduce un numero entero entre 0-100: ";
    cin>>num;
    }while(num<1 || num>100);
    return num;
}

int Suma(int num1, int num2){
    return num1+num2;
}

int Producto(int num1, int num2){
    return num1*num2;
}





