
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
   anio = 1; 
   
	do{
		if (anio <= numero_anios){                     //  <-   DUPLICA CÓDIGO :-(((    Por eso preferimos la versión pre-test
			capital_acumulado = capital_acumulado + capital_acumulado * interes/100.0;
			cout << "\nCapital obtenido transcurrido el año número " << anio << " = " << capital_acumulado;   
			anio++;
		}
	}while (anio <= numero_anios);
    
   
   cout << "\n\n";
   system("pause");
}