
#include <iostream>

using namespace std;

int main(){
     double capital;
     double interes;
     double total;
     int anio=1, numero_anios;

    cout << "Numero de anios: ";
    cin >> numero_anios;
    cout << "Capital depositado: ";
    cin >> capital;
    cout << "Introduzca el interes: ";
    cin >> interes;


        total=capital;

        while(anio<=numero_anios){
            for(int i=1; i<=interes; i++){
                cout<<"\nCalculos al "<<i<<" porciento: \n";
                    for(int j=i; j<=interes; j++){

                        total=total+total*j/100;
                        cout<<"El capital acumulado en "<<anio<<" anios es: "<<total<<"\n";
                    }

            anio++;

            }
        }


}
