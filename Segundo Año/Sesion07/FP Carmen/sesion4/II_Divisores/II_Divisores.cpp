/* 
	Calcular los divisores de un número entero positivo >0 
	Somos conscientes de que mezclamos C/S pero por ahora 
	no tenemos herramientas	(serán los vectores) para separarlos
*/


#include <iostream>
using namespace std;  


int main(){
	int tope, divisor;

	do{
		cout << "Introduce un numero entero positivo mayor que 0: ";
		cin >> tope;
	}while (tope <= 0);

	divisor = 2;

	while (divisor < tope){
		if (tope % divisor == 0)
			cout << divisor << " es un divisor de " << tope << endl;
		
		divisor++;
	}

	cout << "\n\n";
	system("pause");
}