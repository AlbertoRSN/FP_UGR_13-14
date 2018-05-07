#include <iostream>
using namespace std;

int main(){
   int i, nuevo_termino, primero, segundo, suma;
	bool encontrado;
	double segundo_double;

   // Buscando el valor de n:
   /*
		Repetir mientras no se encuentre
			Calcular la suma de los primeros m cuadrados
			Buscar un valor de n, tal que n^2 sea igual a m
         Si no se encuentra n, pasar al siguiente m

      Llamamos primero a m y segundo a n
	*/

   int segundo_cuadrado;
   bool cuadrado_es_menor_que_suma;

	primero = 2;
	encontrado = false;

	while (!encontrado){		
		suma = 0;

		for (i = 1; i <= primero; i++)
			suma = suma + i*i;

      segundo = 2;
      cuadrado_es_menor_que_suma = true;

		while (!encontrado && cuadrado_es_menor_que_suma){
         segundo_cuadrado = segundo * segundo;
         encontrado = suma == segundo_cuadrado;
         cuadrado_es_menor_que_suma = segundo_cuadrado < suma;

         if (!encontrado)
            segundo ++;
      }

		if (!encontrado)
			primero++;
	}


	// Calculando directamente el valor de n, y realizando la suma de forma ineficiente:
	/*
		Repetir mientras no se encuentre
			Calcular la suma de los primeros m cuadrados
			Si la raiz cuadrada de la suma es entera, dicha raíz será el valor de n
         Si no, probar con el siguiente m

		Llamamos primero a m y segundo a n
	*/
	
	primero = 2;
	encontrado = false;

	while (!encontrado){		
		suma= 0;

		for (i = 1; i <= primero; i++)
			suma = suma + i*i;

		segundo_double = sqrt (1.0 * suma);
		segundo = segundo_double;
		encontrado = (segundo*segundo == suma);

		if (!encontrado)
			primero++;
	}

	// Calculando directamente el valor de n, y realizando la suma de forma eficiente:
	/*
		Repetir mientras no se encuentre
			Calcular nuevo sumando de la serie
			Acumular dicho sumando a la suma completa
			Si la raiz cuadrada de la suma es entera, dicha raíz será el valor de n
			Si no, probar con el siguiente m

		Llamamos primero a m y segundo a n
	*/

	primero = 2;
	suma = 1;	   
	encontrado = false;

	while (!encontrado){		
		nuevo_termino = primero * primero;
		suma = suma + nuevo_termino;

		segundo_double = sqrt (1.0 * suma);
		segundo = segundo_double;
		encontrado = (segundo*segundo == suma);

		if (!encontrado)
			primero++;
	}

	if (encontrado)
		cout << "\n" << primero << " " << segundo;

   cout << "\n\n";
	system("pause");
}
