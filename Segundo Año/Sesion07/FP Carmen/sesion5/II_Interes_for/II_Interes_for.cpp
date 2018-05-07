#include <iostream>
using namespace std;

int main(){
   double interes, capital_inicial, capital_acumulado;
   int anio, numero_anios;
   
   cout << "Introduzca capital inicial --> ";
   cin >> capital_inicial;
   cout << "\nIntroduzca número de años --> ";
   cin >> numero_anios;
   cout << "\nIntroduzca interés (como un %) --> ";
   cin >> interes;   
   
  capital_acumulado = capital_inicial;

	for (anio = 1 ; anio <= numero_anios ; anio++){
		capital_acumulado = capital_acumulado  +  capital_acumulado * interes / 100.0; 
		cout << "\nCapital en el año número " << anio << " = " << capital_acumulado;   
	}

	cout << "\n\n";
	system("pause");
}