
#include <iostream>
using namespace std;

int main(){
	double interes, interes_actual, capital_inicial, capital_acumulado;
    int anio, numero_anios;

   cout << "Introduzca capital inicial: ";
   cin >> capital_inicial;
   cout << "\nIntroduzca numero de anios: ";
   cin >> numero_anios;
   cout << "\nIntroduzca interés (como un %): ";
   cin >> interes;


	for (interes_actual = 1 ; interes_actual <= interes ; interes_actual++){
		cout << "\n\nResultados calculados para un interés del " << interes_actual << "% =\n";
		//cout << "Capital inicial: " << capital_inicial;

		capital_acumulado = capital_inicial;

		for (anio = 1 ; anio <= numero_anios; anio++){
			capital_acumulado = capital_acumulado + capital_acumulado * interes_actual / 100.0;
			cout << "\nCapital obtenido transcurrido el anio numero " << anio << " = " << capital_acumulado;
		}
	}

}
