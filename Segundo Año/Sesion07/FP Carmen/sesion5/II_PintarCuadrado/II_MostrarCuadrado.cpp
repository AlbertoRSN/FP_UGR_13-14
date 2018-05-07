#include <iostream>
using namespace std;

int main(){
   int inicio, final, numero_valores, fila, col, final_fila;

	inicio = 5;
	numero_valores = 9;
	final = inicio + numero_valores - 1;

	for (fila = inicio ; fila <= final ; fila++){
		for (col = fila ; col <= final ; col++)
			cout << col << " ";

		cout << "\n";
	}

   cout << "\n\n";

	for (fila = inicio ; fila <= final ; fila++){
		final_fila = fila + numero_valores - 1;

		for (col = fila ; col <= final_fila ; col++)
			cout << col << " ";

		cout << "\n";
	}

	/*
		¿Qué pasaría si en el anterior bucle sustituyésemos final_fila por final?
		Entraría en un bucle sin fin, al estar modificando en cada iteración el valor final
		del bucle más externo
	*/

   cout << "\n\n";

}
