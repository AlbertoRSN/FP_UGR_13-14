#include <iostream>

using namespace std;

int main()
{
   int jugador;
   int puntos;
   const int FIN=-1;
   int equipo1=0;
   int equipo2=0;

    do{
        cout<<"Jugador: ";
        cin>>jugador;
    }while((jugador<1 || jugador>6)&&(jugador!=FIN));

    //En caso de ser -1 sale.
   while(jugador!=FIN){

        //FILTRADO PUNTUACION
        do{
            cout<<"Puntos: ";
            cin>>puntos;
        }while(puntos<1 || puntos>3);

        //Suma de puntos del equipo 1

            if(jugador>=1 && jugador<=3){
                equipo1=puntos+equipo1;
            }
        //Suma de puntos del equipo 2
            if(jugador>=4 && jugador<=6){
                equipo2=puntos+equipo2;
            }

        //FILTRADO JUGADOR
        do{
            cout<<"Jugador: ";
            cin>>jugador;
        }while((jugador<1 || jugador>6)&&(jugador!=FIN));


        //Comparacion de puntuaciones.

    if(jugador==FIN){
        if(equipo1>equipo2){
            cout<<"El equipo ganador es el equipo 1 con: "<<equipo1<<" puntos. "<<endl;
            cout<<"El equipo perdedor ha sido derrotado con un total de:"<<equipo2<<" puntos.";
        }

        else{
            cout<<"El equipo ganador es el equipo 2 con: "<<equipo2<<" puntos. "<<endl;
            cout<<"El equipo perdedor ha sido derrotado con un total de: "<<equipo1<<" puntos.";
        }
    }

   }//while

}
