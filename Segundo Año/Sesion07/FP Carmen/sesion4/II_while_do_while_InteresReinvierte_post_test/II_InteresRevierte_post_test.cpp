
#include <iostream>
using namespace std;

int main(){
	double interes, capital_inicial, capital_acumulado;
   int anio, numero_anios;
   
   cout << "Introduzca capital inicial --> ";
   cin >> capital_inicial;
   cout << "\nIntroduzca n�mero de a�os --> ";
   cin >> numero_anios;
   cout << "\nIntroduzca inter�s (como un %) --> ";
   cin >> interes;   
   
   capital_acumulado = capital_inicial;
   anio = 1; 
   
	do{
		if (anio <= numero_anios){                     //  <-   DUPLICA C�DIGO :-(((    Por eso preferimos la versi�n pre-test
			capital_acumulado = capital_acumulado + capital_acumulado * interes/100.0;
			cout << "\nCapital obtenido transcurrido el a�o n�mero " << anio << " = " << capital_acumulado;   
			anio++;
		}
	}while (anio <= numero_anios);
    
   
   cout << "\n\n";
   system("pause");
}