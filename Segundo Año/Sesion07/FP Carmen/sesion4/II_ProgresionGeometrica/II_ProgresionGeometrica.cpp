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
	n = 2;

	while (n <= tope){ 
		suma_total = suma_total + termino_primero * pow(razon, n-1);		
		n++;
	}

	cout << "\nSuma hasta " << tope << " = " << suma_total;
   cout << "\n\n";
	 
	/*
	En vez de hacer la operaci�n pow, que es costosa, bastar�a multiplicar
	en cada iteraci�n, el valor de a_{n-1} por la raz�n, y ya tengo a_n
	Observad que en Matem�ticas decimos:
		a_i = a_(i-1) * r
	Mientras que en un algoritmo debemos poner:
		termino = termino * r
	*/


	termino_n = termino_primero;
	suma_total = termino_n; 
	n = 2;

	while (n <= tope){
		termino_n = termino_n * razon;
		suma_total = suma_total +  termino_n;		
		n++;
	}

	cout << "\nSuma hasta " << tope << " = " << suma_total;
   cout << "\n\n";
	system("pause");
}
