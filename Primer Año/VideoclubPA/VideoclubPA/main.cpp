/*Alberto Rodríguez Santana.
Videoclub: Nuestro programa leera varias entradas de numeros enteros, que consta de año, veces alquilada, y codigo de la pelicula
y una vez introducida el numero de peliculas que queremos, nos comparara cual de ellas es la mas nueva y la mas veces alquilada.
*/

#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables.
    int ano;
    int codigo;
    int alquilada;
    int auxano, auxalquilada, auxcodigo;
    const int FIN=-1;
    bool Moderna=true;

    //Lectura adelantada y filtrado de codigo.
    do{
        cout<<"Codigo: ";
        cin>>codigo;
    }while(codigo<1 || codigo>201);

    //Bucles principal.
    while(codigo!=FIN){

            //lectura y filtro para la fecha.
            do{
                cout<<"Fecha: ";
                cin>>ano;
            }while(ano<1975 || ano>2012);

            //Filtrado para el numero de veces alquilada.
            do{
                cout << "Numero de veces alquilada: ";
                cin >> alquilada;
            }while(alquilada<0);

            //Comprobacion de pelicula moderna.

            Moderna=ano>auxano;

                if(alquilada>=auxalquilada){
                    auxalquilada=alquilada;
                    auxcodigo=codigo;
                    auxano=ano;
                }

                else if(alquilada==auxalquilada)
            if(Moderna){
                auxalquilada=alquilada;
                auxcodigo=codigo;
                auxano=ano;
            }

            //Filtrado para introducir de nuevo el codigo.
            do{
                cout<<"Codigo: ";
                cin>>codigo;
            }while((codigo<1 || codigo>200) && codigo!=FIN);
    }
    if(auxcodigo!=FIN){

        cout << "CODIGO: "<<auxcodigo<< "\nFECHA: " << auxano<<"\nALQUILADA: "<<auxalquilada;
    }



}


