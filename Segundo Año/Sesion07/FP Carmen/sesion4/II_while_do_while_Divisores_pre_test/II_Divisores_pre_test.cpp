/* Calcular los divisores de un número entero positivo >0 */

#include <iostream>
using namespace std;  


int main(){
	int tope, divisor;
	bool es_negativo;

	/*
	Teníamos un filtro de entrada de la forma:
	
	do{
		cout << "Introduce un numero entero positivo mayor que 0: ";
		cin >> tope;
	}while (tope <= 0);

	Se pide que lo hagamos con un bucle while pre test.
	Para ello, hemos introducido una variable adicional es_negativo
	La inicializamos a true para que siempre entre la primera vez,
	ya que siempre queremos leer un primer valor, al menos.

	El uso del bucle pre-test no es que complique excesivamente
	el código, pero si siempre vamos a ejecutar una primera vez
	el bucle (como en cualquier filtro), mejor nos quedamos con
	la versión anterior con el post-test do while.

	En definitiva, en la mayor parte de los algoritmos usaremos
	bucles pre-test pues siempre habrá situaciones en las que
	no querremos entrar ni una sola vez a ejecutar el cuerpo del bucle.
	La excepción son los filtros de entrada de datos, en los que,
	normalmente, usaremos un post-test (do while)
	*/

	es_negativo = true;

	while (es_negativo){
		cout << "Introduce un numero entero positivo mayor que 0: ";
		cin >> tope;
		es_negativo = (tope <= 0);
	}

	divisor = 1;

	while (divisor <= tope){
		if (tope % divisor == 0)
			cout << divisor << " es un divisor de " << tope << endl;

		divisor++;
	}

	cout << "\n\n";
	system("pause");
}
