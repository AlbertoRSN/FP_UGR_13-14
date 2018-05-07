#include <iostream>
using namespace std;

/*
	Algoritmo:

		Calcular el número de dígitos de n

		Recorrer los dígitos de n
			Sacar la última cifra (n%10) y sumarla
			Quitar la última cifra (n/10)
*/

int main(){
   bool es_narcisista;
   int n_copia, n, i;
   int num_digitos, ultima_cifra;
   double suma;

	cout << "\nIntroduzca un entero: ";
   cin >> n;

   n_copia = n;
   num_digitos = 1;

   while (n_copia > 9){
      n_copia = n_copia / 10;
      num_digitos++;
   }

   n_copia = n;
   suma = 0;

   for (i = 1 ; i <= num_digitos; i++){
      ultima_cifra = n_copia % 10;
      suma = suma + pow(1.0 * ultima_cifra, num_digitos);
      n_copia = n_copia / 10;
   }

	es_narcisista = (suma == n);

   if (es_narcisista)
      cout << "\nEs narcisista";
   else
      cout << "\nNo es narcisista";

   cout << "\n\n";
	system("pause");
}
