#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double termino_primero, razon;
	int n, tope;
	double suma_total;
	int termino_n;

	cout << "\nIntroduzca el primer t�rmino de la progresi�n: ";
	cin >> termino_primero;
	cout << "\nIntroduzca la raz�n de la progresi�n: ";
	cin >> razon;
	cout << "\nIntroduzca el �ndice >= 1 del �ltimo t�rmino que quiere sumar: ";
	cin >> tope;

	suma_total = termino_primero;

	for (n = 2; n <= tope; n++)
		suma_total = suma_total + termino_primero * pow(razon, n-1);		
	
	/*
	En vez de hacer la operaci�n pow, que es costosa, bastar�a multiplicar
	en cada iteraci�n, el valor de a_{n-1} por la raz�n, y ya tengo a_n
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
