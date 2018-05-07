
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
   anio  = 1; 
   
   while (anio <= numero_anios){
      capital_acumulado = capital_acumulado  +  capital_acumulado * interes / 100.0;   // valor nuevo = ciertas operaciones con valor antiguo 
      cout << "\nCapital obtenido transcurrido el año número " << anio << " = " << capital_acumulado;   
      anio++;
   }

   cout << "\n\n";
   system("pause");
}
