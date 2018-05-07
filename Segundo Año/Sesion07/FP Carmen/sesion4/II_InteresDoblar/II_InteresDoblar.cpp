#include <iostream>
using namespace std;

int main(){
   double interes, capital_inicial, capital_acumulado, cuantia_final_a_conseguir;
   int numero_anios;
   
   cout << "Introduzca capital inicial --> ";
   cin >> capital_inicial;
   cout << "\nIntroduzca interés (como un %) --> ";
   cin >> interes;   
   
   capital_acumulado = capital_inicial;
   numero_anios = 0;
   cuantia_final_a_conseguir = capital_inicial * 2;

   while (capital_acumulado < cuantia_final_a_conseguir){
      numero_anios++;           
      capital_acumulado = capital_acumulado  +  capital_acumulado * interes / 100.0;
      cout << "\nDinero obtenido en el año número " << numero_anios << " = " << capital_acumulado;   
   }
   
   cout << "\n\nPara doblar la cantidad inicial han de pasar " << numero_anios << " años";
   
   cout << "\n\n";
   system("pause");
}
