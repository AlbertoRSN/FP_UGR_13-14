#include <iostream>

using namespace std;

int main()
{
    int filas1, filas2, columnas1, columnas2;
    int dato;

    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    int matrizM[columnas1][filas2];


cout<<"\n------------------MATRIZ 1------------------";
    cout<<"Introduce las filas: ";
    cin>>filas1;

    cout<<"Introduce las columnas: ";
    cin>>columnas1;

    for(int i=0; i<filas1; i++){
        for(int j=0; j<columnas1; j++){
        cout<<"Introduce el elemento "<<i<<"-"<<j<<" : ";
        cin>>dato;
        matriz1[i][j]=dato;
        }
    }

cout<<"\n\n------------------MATRIZ 2------------------";

    do{
    cout<<"Introduce las filas (igual que columnas de la matriz 1): ";
    cin>>filas2;
    }while(filas2!=columnas1);

    cout<<"Introduce las columnas: ";
    cin>>columnas2;

    for(int i=0; i<filas2; i++){
        for(int j=0; j<columnas2; j++){
        cout<<"Introduce el elemento "<<i<<"-"<<j<<" : ";
        cin>>dato;
        matriz2[i][j]=dato;

        }
    }

    //MULTIPLICACION DE LAS DOS MATRICES.
    for (int i=1; i<=filas2; i++){
        for (int j=1; j<=columnas1; j++){
            matrizM[i][j]=0;
         for (int k=1; k<=columnas1; k++){
             matrizM[i][j]=matrizM[i][j]+matriz1[i][k]*matriz2[k][j];
          }
       }
    }
cout<<"\n---------------------------------------------------\n";
cout<<"\nLA MULTIPLICACION DE LAS MATRICES ES:\n\n";
//IMPRESION
  for (int i=1; i<=filas2; i++)
   for (int j=1; j<=columnas1; j++){
            cout<<matrizM[i][j];
    }
}





