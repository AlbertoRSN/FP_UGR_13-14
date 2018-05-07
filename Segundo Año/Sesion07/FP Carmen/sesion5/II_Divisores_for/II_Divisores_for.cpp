/* Calcular los divisores de un número entero positivo >0 */

#include <iostream>
using namespace std;

int main(){
	int tope, divisor;

	do{
		cout << "Introduce un numero entero positivo mayor que 0: ";
		cin >> tope;
	}while (tope <= 0);

	for (divisor = 2; divisor < tope; divisor++)
		if (tope % divisor == 0)
			cout << divisor << " es un divisor de " << tope << endl;

	cout << "\n\n";
	return 0;
}
