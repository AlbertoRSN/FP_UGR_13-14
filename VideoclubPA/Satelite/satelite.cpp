/*Alberto Rodriguez Santana.
Satelite: Este programas nos leera tres datos de entradad de los cuales dos de ellos seran enteros y uno
de tipo caracter (temperatura, humedad y zona), al programa le introducimos varias series de los tres valores mencionados
y ha de imprimirnos el pantalla la zona con la temperatura mas alta y humedad mas baja. */

#include <iostream>

using namespace std;

int main()
{
   const char FIN='@';
   int temperatura, humedad;
   char zona;
   bool humedadmasbaja=true;
   bool temperaturamasalta=true;
   int auxhumedad, auxtemperatura;
   char auxzona;


    //Filtramos la entrada de Zona para que unicamente entren mayusculas.
   do{
    cout<<"ZONA: ";
    cin>>zona;
   }while(zona<'A' || zona>'Z');


        while(zona!=FIN){

            //Filtramos la entrada de Temperatura.
            do{
                cout<<"Temperatura: ";
                cin>>temperatura;
            }while(temperatura<0 || temperatura>100);

            //Filtramos la entrada de Humedad.

            do{
                cout<<"Humedad: ";
                cin>>humedad;
            }while(humedad<0 || humedad>100);

                //Vamos a hacer la comparacion de humedad mas baja y temperatura mas alta.
                humedadmasbaja=humedad<=auxhumedad;
                temperaturamasalta=temperatura>auxtemperatura;

                if(humedadmasbaja && temperaturamasalta){
                    auxhumedad=humedad;
                    auxtemperatura=temperatura;
                    auxzona=zona;
                }


            //Filtramos de nuevo la zona para que si zona cumple las condiciones, vuelva a preguntar.
            do{
                cout<<"ZONA: ";
                cin>>zona;
            }while((zona<'A' || zona>'Z')&& zona!=FIN);
        }

        //Imprimimos la salida.
    cout << "\n ZONA: " << auxzona << "\n TEMPERATURA: " << auxtemperatura << "\n HUMEDAD: " << auxhumedad;

}
