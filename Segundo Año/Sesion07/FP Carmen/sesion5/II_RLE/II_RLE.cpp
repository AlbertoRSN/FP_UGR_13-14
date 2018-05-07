#include <iostream>
using namespace std;

int main(){
   int actual, anterior, iguales_hasta_ahora;

   /*
      Mientras que el actual no sea el terminador (-1)
         Avanzar actual y anterior

         Si son iguales
            incrementar la longitud de la secuencia actual
         si no
            Imprimir el actual junto con la longitud actual
            y resetear el contador de la longitud actual

   */

   cin >> actual;
   iguales_hasta_ahora = 1;

   while (actual != -1){
      anterior = actual;
      cin >> actual;

      if (anterior == actual)
         iguales_hasta_ahora++;
		else{
			cout << iguales_hasta_ahora << " " << anterior << " ";
         iguales_hasta_ahora = 1;
      }
   }

   cout << "\n\n";

}
