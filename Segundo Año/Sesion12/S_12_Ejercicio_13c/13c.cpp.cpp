#include <iostream>

using namespace std;

int main()
{

   int columnas, filas;
   int mayorF, minimoC, dato;

   cout<<"Introduce el numerod e filas: ";
   cin>>filas;

   cout<<"Introduce el numero de columnas: ";
   cin>>columnas;

    int matriz[filas][columnas];

    cout<<"\n\n";

   for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"Introduce el elemento "<<i<<"-"<<j<<" : ";
        cin>>dato;
        matriz[i][j]=dato;

        //Definimos que el mayor es el primer elemento de cada fila para luego comparar.
        if(j==0){
            mayorF=matriz[i][j];
        }

        if(i==0)
         minimoC=matriz[i][j];

        if(matriz[i][j]<minimoC)
            minimoC=matriz[i][j];

        if(matriz[i][j]>mayorF)
            mayorF=matriz[i][j];




    }

    cout<<"\n\nEl elemento mas grande de la fila "<<i<<" es: "<<mayorF<<"\n\n";


   }

    cout<<"El elemento mas pequeño de las columnas es: "<<minimoC;

}
