#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double termino_primero, razon;
	int n, tope;
	double suma_total;
	int termino_n;

	cout << "\nIntroduzca el primer término de la progresión: ";
	cin >> termino_primero;
	cout << "\nIntroduzca la razón de la progresión: ";
	cin >> razon;
	cout << "\nIntroduzca el índice >= 1 del último término que quiere sumar: ";
	cin >> tope;

	suma_total = termino_primero;

	for (n = 2; n <= tope; n++)
		suma_total = suma_total + termino_primero * pow(razon, n-1);		
	
	/*
	En vez de hacer la operación pow, que es costosa, bastaría multiplicar
	en cada iteración, el valor de a_{n-1} por la razón, y ya tengo a_n
	*/

	termino_n = termino_primero;
	suma_total = termino_n; 

	for (n = 2; n <= tope ; n++){
		termino_n = termino_n * razon;
		suma_total = suma_total +  termino_n;		
	}
	
	cout << "\nSuma hasta " << tope << " = " << suma_total;
   cout << "\n\n";
	system("pause");
}
