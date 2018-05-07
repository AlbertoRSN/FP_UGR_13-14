/*
   Pasar un car�cter de may�scula a min�scula. 
*/

#include <iostream>
using namespace std;

int main(){
   const int DISTANCIA_MAY_MIN = 'a'-'A';             
   char letra_minuscula, letra_mayuscula;
   
   /*
   Algoritmo:
      Lee una letra, HASTA que sea una may�scula,

      es decir, hasta que (letra_mayuscula >= 'A') && (letra_mayuscula <= 'Z')
      sea true

   Equivale a:
         
      Lee una letra, MIENTRAS que NO sea una may�scula
      
      es decir, mientras que ! ((letra_mayuscula >= 'A') && (letra_mayuscula <= 'Z'))
      sea true
      es decir, mientras que !(letra_mayuscula >= 'A') || !(letra_mayuscula <= 'Z')
      sea true  (hemos aplicado las leyes de Morgan)
      es decir, mientras que (letra_mayuscula < 'A') || (letra_mayuscula > 'Z')
      sea true 
   
   */
	/*
   do{
      cout << "\nIntroduzca una letra may�scula  --> ";
      cin >> letra_mayuscula;
   }while ((letra_mayuscula < 'A') || (letra_mayuscula > 'Z'));
   
	*/

	/*
		O si se prefiere, quedar�a muy claro usar un bool:
	*/

	
	bool es_mayuscula;

	do{
      cout << "\nIntroduzca una letra may�scula  --> ";
      cin >> letra_mayuscula;
		es_mayuscula = (letra_mayuscula >= 'A') && (letra_mayuscula <= 'Z');
   }while (! es_mayuscula);
   
   letra_minuscula = letra_mayuscula + DISTANCIA_MAY_MIN ;
   
   cout << "\nEl car�cter " << letra_mayuscula  
        << " pasado a min�scula es: " << letra_minuscula;
   
   cout << "\n\n";   
   system("pause");
}