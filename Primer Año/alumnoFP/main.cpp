#include <iostream>
/*alumnoFP datos miembro:
string DNI, string apellidos, string nombre, float notaParcial1, float notaParcial2, float
notaTeoria, float notaParticipacion, float notaFinal, string calificacion;
funciones miembro:
...
su funcionalidad se deja a tu elección.*/

using namespace std;

//-----------------------------PROTOTIPOS-----------------------------
   void mostrarMenu();
   void leerAlumno();
   int leerOpcion();
   int leerNota(int notaP1,int notaP2,int notaT,int notaPart);
   int mostrarNota();

int main()
{
    const int FIN=4;
    int opcion=0;
    bool datosSi;

    do{
    mostrarMenu();
    leerOpcion();

        switch(opcion){

        case '1':
            void leerAlumno();
            datosSi=true;
        break;

        case '2':
            if(datosSi)
            int leerNota(int notaP1,int notaP2,int notaT,int notaPart);
            else cout<<"Antes debe elegir la opcion 1.";
        break;

        case '3':
            if(datosSi)
             int mostrarNota();
            else cout<<"Antes debe elegir la opcion 1.";
        break;
        }
    }while(opcion <1 || opcion>4 && opcion==FIN);

        cout<<"Has elegido salir del programa.";
    }



//------------------------------IMPLEMENTACIÓN--------------------------

void mostrarMenu(){
    cout<<" ---------------------------- \n";
    cout<<"  1. Datos del Alumno.\n ";
    cout<<" 2. Introducir notas.\n ";
    cout<<" 3. Nota Final / Calificacion.\n ";
    cout<<" 4. Salir.\n";
    cout<<"---------------------------- \n";
}

int leerOpcion(){
    char opcion;

    do{
        cout<<"\n Elige una opcion: ";
        cin>>opcion;
    }while(opcion<1 || opcion>4);

    return opcion;
}

void leerAlumno(string dni, string nombre, string apellidos){
    cout<<"Introduce el Dni: ";
    cin>>dni;

    cout<<"Introduce Nombre: ";
    cin>>nombre;

    cout<<"Introduce Apellidos: ";
    cin>>apellidos;
}

int leerNota(int notaP1,int notaP2,int notaT,int notaPart){
    do{
    cout<<"Introduce nota parcial 1: ";
    cin>>notaP1;
    }while(notaP1<1 || notaP1>10);
    do{
    cout<<"introduce nota parcial 2: ";
    cin>>notaP2;
    }while(notaP2<1 || notaP2>10);
    do{
    cout<<"Introduce nota teoría: ";
    cin>>notaT;
    }while(notaT<1 || notaT>10);
    do{
    cout<<"Introduce nota participacion: ";
    cin>>notaPart;
    }while(notaPart<1 || notaPart>10);
}


