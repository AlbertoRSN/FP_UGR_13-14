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
		�Qu� pasar�a si en el anterior bucle sustituy�semos final_fila por final?
		Entrar�a en un bucle sin fin, al estar modificando en cada iteraci�n el valor final
		del bucle m�s externo
	*/

   cout << "\n\n";

}
