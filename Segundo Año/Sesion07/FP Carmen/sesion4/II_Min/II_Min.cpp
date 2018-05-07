/* Cacular el mínimo de varios valores leídos desde teclado  */
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
	Algo que NUCA haremos será inicializar min a un literal:
	min = 32768;
	La razón es 32768 puede que sea el mínimo entero en un compilador 
		que use 16 bits para su representación,
		PERO en otro compilador que use 32 bits, el mínimo entero es mucho más pequeño.
		Si todos los valores leídos desde teclado están por encima de la constante anterior,
		el programa ya no funcionará correctamente, ya que dará como salida 32768
	*/

   min = dato;                 // Inicializamos min al primer valor leído
   validos_introducidos = 0;   // Si el primero es negativo, consideramos que no es válido 
     
   while (dato >= 0){     
      validos_introducidos++;
      
      if (dato < min)           // La primera vez, dato es igual a min => false
         min = dato;
         
      cout << MENSAJE_ENTRADA;
      cin >> dato;
   }
   
   if (validos_introducidos > 0){
      cout << "\nNúmero de valores introducidos = " << validos_introducidos;
      cout << "\nMínimo = " << min;
   }
   else
      cout << "\nNo se introdujo ningún valor";
      
   cout << "\n\n";
   system("pause");
}
