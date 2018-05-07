#include <iostream>
using namespace std;

int main(){
   __int64 factorial;
	int n;
	int multiplicando;

	cout << "\nIntroduzca un entero positivo: ";
	cin >> n;

	factorial = 1;

	for (multiplicando = 2; multiplicando <=n ; multiplicando++)
		factorial = factorial * multiplicando;

	cout << "\nEl factorial de " << n << " es " << factorial;

	/////////////////////////////////////////////////////////////

	int base, exponente;
	int i;	
	__int64 potencia;

	cout << "\n\nIntroduzca la base: ";
	cin >> base;
	cout << "\nIntroduzca el exponente: ";
	cin >> exponente;

	potencia = 1;

	for (i = 1; i <= exponente; i++)
		potencia = potencia * base;

	cout << "\n" << base << " elevado a " << exponente << " es igual a " << potencia;

	// Observad que si exponente fuese cero, la variable potencia se quedaría con 1,
	// lo que es correcto ya que base elevado a 0 es siempre 1

	/////////////////////////////////////////////////////////////

	int total_a_elegir, elegidos;
	__int64 factorial_total_a_elegir, factorial_elegidos, factorial_diferencia, combinatorio;

	cout << "\n\nIntroduzca total de elementos: ";
	cin >> total_a_elegir;
	cout << "\nIntroduzca cuántos va a elegir del total: ";
	cin >> elegidos;

	/*
		El combinatorio de n sobre m nos da las formas posibles de elegir m elementos
		de un total de n, sin repetición y sin importar el orden.
		El ejemplo típico es la lotería primitiva. 

		La siguiente solución aplica la fórmula del combinatorio directamente,
		es decir, calculando n! / (m! (n-m)!)			
	*/

	/*
	factorial_total_a_elegir = 1;

	for (i = 2; i <= total_a_elegir; i++)
		factorial_total_a_elegir = factorial_total_a_elegir * i;

	factorial_elegidos = 1;

	for (i = 2; i <= elegidos; i++)
		factorial_elegidos = factorial_elegidos * i;

	factorial_diferencia = 1;

	for (i = 2; i <= total_a_elegir - elegidos; i++)
		factorial_diferencia = factorial_diferencia * i;

	combinatorio = factorial_total_a_elegir / (factorial_elegidos * factorial_diferencia);

	cout << "\nCombinaciones de " << total_a_elegir << " elementos ";
	cout << "tomados de " << elegidos << " en " << elegidos;
	cout << " = " << combinatorio;
	*/

	/*
		La anterior aproximación puede producir desbordamiento incluso utilizando
		un tipo entero tan grande como __int64. 
		Comprobadlo con 49 y 6 (combinaciones posibles en la lotería primitiva)
		http://www.nitrxgen.net/factorialcalc.php
		
		49! -> Tiene 63 cifras = 608281864034267560872252163321295376887552831379210240000000000	
		60415263063373835637355132068513997507264512000000000

		Se desborda con un __int64. 
		Con un double tampoco valdría ya que, aunque le cupiese y no hubiese desbordamiento,
		sólo habría 16 cifras de precisión.

		Simplificamos la expresión del cálculo del combinatorio:
		n! / (m! (n-m)!)  =   n(n-1)...(n-m+1) / m!

		¡Hemos pasado a tener únicamente m multiplicaciones en el numerador y denominador!

		total_a_elegir (total_a_elegir-1) ... (total_a_elegir - elegidos + 1) / elegidos!

		Ahora sí podemos calcular, al menos, la probabilidad de ganar en la primitiva
		(que, por cierto, no son muchas = 1 / combinaciones de 49 tomados de 6 en 6) = 1 entre 13.983.816 
	*/
	__int64 numerador;

	factorial_elegidos = 1;
	numerador = 1;

	/*
		En la siguiente solución calculamos el numerador recorriendo todos
		los factores que hay entre total_a_elegir y total_a_elegir - elegidos + 1
	*/
	/*
	factorial_elegidos = 1;

	for (i = 2; i <= elegidos; i++)
		factorial_elegidos = factorial_elegidos * i;

	for (i = total_a_elegir - elegidos + 1 ; i <= total_a_elegir ; i++)
		numerador = numerador * i; 
	*/

	/*
		En la siguiente solución realizamos el recorrido de los factores
		del numerador y denominador dentro del mimo bucle.
	*/

	for (i = 1 ; i <= elegidos ; i++){
       factorial_elegidos = factorial_elegidos * i;
       numerador = numerador * (total_a_elegir - elegidos + i);
   }

	combinatorio = numerador/factorial_elegidos;

	cout << "\nCombinaciones de " << total_a_elegir << " elementos ";
	cout << "tomados de " << elegidos << " en " << elegidos;
	cout << " = " << combinatorio;

   cout << "\n\n";
	system("pause");
}
