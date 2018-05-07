#include <iostream>
#include <cmath>
using namespace std;

// Suma  de los términos de la progresión hasta el término k. Versión 1.

double SumaProgresionGeometrica (double primer_termino, double razon, double k){
	double suma_total, termino_n;
	int n;

	termino_n = primer_termino;
	suma_total = termino_n;

	for (n=2; n <= k ; n++){
		termino_n = termino_n * razon;
		suma_total = suma_total +  termino_n;
	}

	return suma_total;
}


// Suma  de los términos de la progresión hasta infinito.

double SumaHastaInfinitoProgresionGeometrica (double primer_termino, double razon){
	double suma;
	double denominador = 0.0;

	if (fabs(razon) <= 1)
		suma = primer_termino /(1 - razon);
	else
		suma = 1.0/denominador;    // <- Devuelve infinito

	return suma;
}


/*
	La fórmula del producto de los términos de la progresión hasta el k-ésimo término es:
		raiz_cuadrada_de ( (a1 * ak) elevado a k)

	¿Definiríamos la siguiente función?

		ProductoHastaProgresionGeometrica (double primer_termino, double termino_k, int k)

	No sería una función bien diseñada ya que, para que realice su cometido,
	debe recibir el cómputo correcto de termino_k
	¿Y si le pasamos un valor incorrectamente calculado?

	MUY IMPORTANTE:

		La función debe ocuparse de realizar los cómputos que ella necesite
		y no delegar la realización de dichos cómputos en la llamada.


	La cabecera de la función debe ser:

		double ProductoHastaProgresionGeometrica (double primer_termino, double razon, int k)
*/


double TerminoProgresionGeometrica(double primer_termino, double razon, int k){
	double termino;

	termino = primer_termino * pow(razon, k-1);

	return termino;
}

// Producto de los términos de la progresión hasta el término tope
double ProductoHastaProgresionGeometrica (double primer_termino, double razon, int k){
	double ultimo_termino;

	ultimo_termino = primer_termino * TerminoProgresionGeometrica(primer_termino, razon, k);

	return sqrt( pow(primer_termino * ultimo_termino , k));
}


int main(){
	double primer_termino, razon;
	int tope;
	double suma, producto, suma_infinito;

	cout << "\nIntroduzca el primer término de la progresión ";
	cin >> primer_termino;
	cout << "\nIntroduzca la razón de la progresión ";
	cin >> razon;
	cout << "\nIntroduzca el tope hasta el que quiere sumar ";
	cin >> tope;

	suma =			 SumaProgresionGeometrica(primer_termino, razon, tope);
	producto =		 ProductoHastaProgresionGeometrica(primer_termino, razon, tope);
	suma_infinito = SumaHastaInfinitoProgresionGeometrica(primer_termino, razon);

	cout << "\nSuma hasta " << tope << " = " << suma;
	cout << "\nProducto hasta " << tope << " = " << producto;
	cout << "\nSuma hasta infinito: " << suma_infinito;

	cout << "\n\n";

}
