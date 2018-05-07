
#include <iostream>
#include <cmath>
using namespace std;

/*
   Una primera solución pasaría por hacer  lo siguiente.
   Para calcular en cada iteración -1 elevado a i, lo hago
   con un bucle similar al usado para calcular una base
   cualquiera elevado a un exponente entero, sustituyendo
   la base por -1 y el exponente por i, es decir:
      
   for (j = 1 ; j <= i ; j++)
         potencia = potencia*(-1);    
   
   Por tanto, el recorrido de los términos de la serie quedaría así:
      
   suma=0;

   for (i = 1 ; i <= n ; i++){
      potencia = 1;
   
      for (j = 1 ; j <= i ; j++)
         potencia = potencia*(-1);
   
      termino = (i*i-1)/(2.0*i);
      suma = suma + potencia*termino;
   }
   
   Pero SIEMPRE nos debemos preguntar si en cada iteración de un bucle,
   podemos aprovechar los cálculos realizados en la iteración anterior.
   En este caso es así. Si en la iteración i-1 he calculado la potencia
   de -1 elevado a i-1, y lo he almacenado en una variable potencia, 
   entonces, para calcular la potencia de -1 elevado a i, basta multiplicar
   (en la siguiente iteración) pot por -1, o lo que es lo mismo, cambiarlo 
   de signo.
   De esa forma sustituimos todo el bucle for j por una única línea:
      potencia = -potencia;
*/




int main(){
   int i, tope, potencia;
   double suma_serie, termino;   
   
   cout << "\nIntroduzca el límite de la serie ";
   cin >> tope;
   
   suma_serie = 0;
   potencia = 1;
   
   for (i = 1 ; i <= tope ; i++){
      potencia = - potencia;
      termino = potencia * (i * i - 1) / (2.0 * i);
      suma_serie = suma_serie + termino;
   }
   
   
   cout << "\nSuma de la serie = " << suma_serie;      
   cout << "\n";
   system("pause");
}
