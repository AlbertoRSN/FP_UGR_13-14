
#include <iostream>
using namespace std;

int main(){
	double interes, interes_actual, capital_inicial, capital_acumulado;
   int anio, numero_anios;
   
   cout << "Introduzca capital inicial --> ";
   cin >> capital_inicial;
   cout << "\nIntroduzca número de años --> ";
   cin >> numero_anios;
   cout << "\nIntroduzca interés (como un %) --> ";
   cin >> interes; 

	/*
		Importante: Observad la asignación
			capital_acumulado = capital_inicial; 
		Es necesario hacerlo, cada vez, antes de entrar al bucle for (anio ....
	*/

	for (interes_actual = 1 ; interes_actual <= interes ; interes_actual++){
		cout << "\n\nResultados calculados para un interés del " << interes_actual << "% =\n";
		cout << "Capital inicial: " << capital_inicial;

		capital_acumulado = capital_inicial; 
	
		for (anio = 1 ; anio <= numero_anios; anio++){
			capital_acumulado = capital_acumulado + capital_acumulado * interes_actual / 100.0;
			cout << "\nCapital obtenido transcurrido el año número " << anio << " = " << capital_acumulado;   
		}
	}
   
   cout << "\n\n";
   system("pause");
}
