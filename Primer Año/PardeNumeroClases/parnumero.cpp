#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

/*Cread una clase llamada ParejaEnteros que represente una pareja de enteros
cualesquiera. Añadid un constructor y los métodos que se estimen oportunos para
asignarles valores a los enteros y para obtener el valor que éstos tengan. Las operaciones
que queremos realizar sobre una pareja son calcular el mayor, el menor,
comprobar si se dividen, ver quien es el dividendo y quien el divisor, intercambiarlos y
calcular el máximo común divisor. Cread un main que llame a dichos métodos, para
comprobar que están bien implementados.

¿Le añadiría a la clase ParejaEnteros un método para calcular el factorial de un
número? ¿Por qué?
Finalidad: Diseñar la interfaz de una clase. Dificultad Baja.*/

using namespace std;

class parejaEnteros{
    private:
        int valor1;
        int valor2;
        int dividendo;
        int divisor;
        int aux;

    public:
        parejaEnteros()
            :valor1(1),valor2(1)
        {
        }
        parejaEnteros(int primer_valor, int segundo_valor)
            :valor1(primer_valor),
             valor2(segundo_valor)
        {
        }
        void setparejaEnteros(int primer_valor, int segundo_valor){
            valor1 = primer_valor;
            valor2 = segundo_valor;
        }
        int getPrimero(){
            return valor1;
        }
        int getSegundo(){
            return valor2;
        }

        void comprobarMayor(){
            if(valor1>valor2)
                cout << "\n El " << valor1 << " es el mayor.";
            else{
                if(valor2>valor1)
                    cout << "\n El " << valor2 << " es el mayor.";
                else
                    cout << "\n Los dos valores son iguales.";
            }
        }

        void comprobarMenor(){
            if(valor1>valor2)
                cout << "El " << valor2 << " es el menor.";
            else{
                if(valor2>valor1)
                    cout << "El " << valor1 << " es el menor.";
                else
                    cout << "\n Los dos valores son iguales.";
            }
        }

        void seDividen(){
            if(valor1%valor2==0){
                dividendo=valor1;
                divisor=valor2;
            cout<<valor1<< " entre "<<valor2<< " se pueden dividir.";
            cout << "El dividendo es: " << valor1;
            cout << "El divisor es: " << valor2;
            }
            else{
                if(valor2%valor1==0){
                    dividendo=valor2;
                    dividendo=valor1;
                cout<<valor2<< " entre "<<valor1<< " se pueden dividir.";
                }
                else
                    cout<< "No se pueden dividir.";
            }
        }

        void intercambiar(){
            aux=valor1;
            valor1=valor2;
            valor2=aux;
            cout<<valor1<< ", "<<valor2;
        }

        int mcd(){
            int mcd, resto, divisor=valor1, dividendo=valor2;
                if (valor2 < valor1){
                    divisor=valor2;
                    dividendo=valor1;
                }
        resto = dividendo % divisor;

            while(resto != 0){
                dividendo = divisor;
                divisor = resto;
                resto = dividendo % divisor;
            }
        mcd = divisor;
        return mcd;
    }

};

    void mostrarMenu();
    int leeNumero();
    int leeOpcion();


int main(){
    const int FIN='7';
    int num1, num2, resultado;
    parejaEnteros parNumeros;
    int opcion=0;
    bool datosSi=true;


    while (opcion!=FIN){
        mostrarMenu();
        opcion=leeOpcion();


        switch(opcion){

        case 1: //Opción 1
			num1 = leeNumero();
			num2 = leeNumero();
			parNumeros.setparejaEnteros(num1,num2);
			datosSi = true;
			break;

        case 2:
                if(datosSi)
                    parNumeros.comprobarMayor();
                break;
        case 3:
                if(datosSi)
                    parNumeros.comprobarMenor();
                break;
        case 4:
                if(datosSi)
                    parNumeros.seDividen();
                break;
        case 5:
                if(datosSi)
                    parNumeros.intercambiar();
                break;
        case 6:
                if(datosSi){
                    resultado = parNumeros.mcd();
                    cout << "El mcd es: " << resultado;

        }

    }


}
}

void mostrarMenu(){
    cout<< "\n 1.- Introduce un par de numeros."
        << "\n 2.- Calcular Mayor."
        << "\n 3.- Calcular Menor."
        << "\n 4.- Comprobar si se dividen (Dividendo y Divisor)."
        << "\n 5.- Intercambiar."
        << "\n 6.- M.C.D."
        << "\n 7.- Salir. \n";
}

int leeNumero(){
    int numero;

    do{
        cout<<"Introduce un numero entero y positivo ";
        cin>>numero;
    }while(numero<0);
}

int leeOpcion(){
    char opcion;

    do{
        cout<< "\n Elija una opcion: ";
        cin>>opcion;
    }while(opcion<'1' || opcion >'7');
    return opcion-'0';


}

