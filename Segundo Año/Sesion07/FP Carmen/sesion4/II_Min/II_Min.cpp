/* Cacular el m�nimo de varios valores le�dos desde teclado  */
// Ejemplo de lectura anticipada

#include <iostream>
#include <string>
using namespace std;  

int main(){
   double dato, min;
   int validos_introducidos;
   const string MENSAJE_ENTRADA = "\nIntroduzca un valor real (negativo para terminar) ";
   
   cout << MENSAJE_ENTRADA;
   cin >> dato;               //  Lectura anticipada

	/*
	Algo que NUCA haremos ser� inicializar min a un literal:
	min = 32768;
	La raz�n es 32768 puede que sea el m�nimo entero en un compilador 
		que use 16 bits para su representaci�n,
		PERO en otro compilador que use 32 bits, el m�nimo entero es mucho m�s peque�o.
		Si todos los valores le�dos desde teclado est�n por encima de la constante anterior,
		el programa ya no funcionar� correctamente, ya que dar� como salida 32768
	*/

   min = dato;                 // Inicializamos min al primer valor le�do
   validos_introducidos = 0;   // Si el primero es negativo, consideramos que no es v�lido 
     
   while (dato >= 0){     
      validos_introducidos++;
      
      if (dato < min)           // La primera vez, dato es igual a min => false
         min = dato;
         
      cout << MENSAJE_ENTRADA;
      cin >> dato;
   }
   
   if (validos_introducidos > 0){
      cout << "\nN�mero de valores introducidos = " << validos_introducidos;
      cout << "\nM�nimo = " << min;
   }
   else
      cout << "\nNo se introdujo ning�n valor";
      
   cout << "\n\n";
   system("pause");
}
