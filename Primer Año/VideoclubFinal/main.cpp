/*Alberto Rodríguez Santana.
Videoclub: Nuestro programa leera varias entradas de numeros enteros, que consta de año, veces alquilada, y codigo de la pelicula
y una vez introducida el numero de peliculas que queremos, nos comparara cual de ellas es la mas nueva y la mas veces alquilada.
*/


#include <iostream>
using namespace std;
int main(){
    //Declaramos las Constantes.
   int ano;
   int alquilada;
   int codigo;
   //Declaramos el centinela FIN.
   const int FIN=-1;

   cout<<"Codigo: ";
   cin>>codigo;
   while(codigo!=FIN){

       while(codigo>0 && codigo<201){

            do{
                cout<<"Ano de la pelicula: ";
                cin>>ano;

                cout<<"Numero de veces alquilada: ";
                cin>>alquilada;


            }while((ano<1974 || ano>=2012) || (alquilada<=0));

        cout<<"Codigo: ";
        cin>>codigo;
       }

    }

   cout << "\n CODIGO: " << codigo << "\n FECHA: " << ano << "\n VECES: " << alquilada;

}
