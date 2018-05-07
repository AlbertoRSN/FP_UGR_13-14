#include <iostream>

using namespace std;

int main()
{
   int util_columnas, util_filas;
   int dato, aux;

   cout<<"Introduce el numero de filas: ";
   cin>>util_filas;

    do{
   cout<<"Introduce el numero de columnas (igual que filas): ";
   cin>>util_columnas;
    }while(util_columnas!=util_filas);

   int matriz[util_filas][util_columnas];

   int traspuesta[util_filas][util_columnas];

    //Inicializo todos los valores de la matriz a '0';
    for(int i=0; i<util_filas; i++){
        for(int j=0; j<util_columnas; j++)
            traspuesta[i][j]=0;
    }

    cout<<"\n\n";

    //Leo los datos enteros y los introduzco en mi matriz principal.
   for(int i=0; i<util_filas; i++){
    for(int j=0; j<util_columnas; j++){
        cout<<"Introduce el elemento ["<<i<<","<<j<<"]: ";
        cin>>dato;
        matriz[i][j]=dato;
    }
   }

    //Hago el cambio a Traspuestas y lo guardo en la matriz Traspuesta.
   for(int f=0; f<util_filas; f++){
        for(int c=f;c<util_columnas; c++){

            traspuesta[f][c]=matriz[f][c];
            matriz[f][c]=matriz[c][f];
            matriz[c][f]=traspuesta[f][c];
            traspuesta[f][c]=matriz[c][f];
            /*
            aux=matriz[f][c];
            matriz[f][c]=matriz[c][f];
            matriz[c][f]=aux;
            */
            //traspuesta[c][f]=matriz[c][f];  Lo pongo en comentario ya que no se como guardar el resultado en otra matriz.
        }
   }



    //Muestro la matriz por pantalla.
   for(int fil=0; fil<util_filas; fil++){
    for(int col=0; col<util_columnas; col++)
           //cout<<traspuesta[fil][col];
            cout<<matriz[fil][col];
    }
}
