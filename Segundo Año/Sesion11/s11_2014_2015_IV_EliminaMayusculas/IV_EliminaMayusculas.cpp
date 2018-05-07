////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Juan Carlos Cubero
//
////////////////////////////////////////////////////////////////////////////

/*
A�adid el m�todo EliminaMayusculas para eliminar todas las may�sculas.
Por ejemplo, despu�s de aplicar dicho m�todo al vector
   {'S','o','Y',' ','y','O'},
�ste debe quedarse con
   {'o',' ','y'}.
Un primer algoritmo para resolver este problema ser�a el siguiente (en ejercicios posteriores
se ver�n m�todos m�s eficientes):

   Recorrer todas las componentes de la secuencia
      Si la componente es una may�scula, borrarla

Queremos implementarlo llamando al m�todo Elimina que se ha definido en el ejercicio
4 de esta relaci�n de problemas:

class SecuenciaCaracteres{
.........
   void EliminaMayusculas(){
      for (int i=0; i<total_utilizados; i++)
         if (isupper(vector_privado[i]))
            Elimina(i);
   }
};

El anterior c�digo tiene un fallo. �Cu�l? Probarlo con cualquier secuencia que tenga
dos may�sculas consecutivas, proponer una soluci�n e implementarla
*/

#include <iostream>
#include <cctype>
using namespace std;

class  SecuenciaCaracteres{
private:
   static  const  int  TAMANIO  =  50;
   char  vector_privado[TAMANIO];
   int   total_utilizados;
public:
   SecuenciaCaracteres()
      :total_utilizados(0)
   {
   }

   int  TotalUtilizados(){
      return  total_utilizados;
   }

   void  Aniade(char  nuevo){
      if (total_utilizados  <  TAMANIO){
         vector_privado[total_utilizados]  =  nuevo;
         total_utilizados++;
      }
   }

	// Definimos el siguiente m�todo para a�adir todos los caracteres de un string

	void AniadeCadena(string nuevo){
		int tope = nuevo.size();

		for (int i = 0; i < tope; i++)
			Aniade(nuevo[i]);
	}

   char  Elemento(int  indice){
      return  vector_privado[indice];
   }

   void Modifica (int indice_componente, char nuevo){
      if (indice_componente >= 0  &&  indice_componente < total_utilizados)
         vector_privado[indice_componente] = nuevo;
   }


   // Elimina una componente, dada por su posici�n
	void Elimina (int posicion){
	   /*
      Algoritmo:

		   Recorremos de izquierda a derecha toda las componentes
		   que hay a la derecha de la posici�n a eliminar
			   Le asignamos a cada componente la que hay a su derecha
      */
      if (posicion >= 0 && posicion < total_utilizados){
         int tope = total_utilizados-1;

         for (int i = posicion ; i < tope ; i++)         // i < tope ya que la �ltima asignaci�n  ultimo <- ? no es necesaria
            vector_privado[i] = vector_privado[i+1];

         total_utilizados--;
      }
	}

   void EliminaMayusculasIneficiente(){
      /*
      Algoritmo:
		   Recorrer todas las componentes que hay en el vector
			   Si la componente actual es may�scula
				   Elimirla (llamar al m�todo Elimina)
			   en otro caso
               Pasar a la siguiente componente

		   Actualizar el n�mero de componentes utilizadas
		*/
      // La siguiente implementaci�n de este algoritmo es incorrecta porque cuando ha borrado una may�scula, no debe avanzar i.
      // Al estar dentro de un for, siempre se ejecuta i++, por lo que si hay dos may�sculas contiguas,
      // no borra la segunda.
      /*
	      void EliminaMayusculas(){
            for (int i=0; i<total_utilizados; i++)
               if (isupper(vector_privado[i]))
                  Elimina(i);
         }
      */
      // Soluci�n: �Decrementamos i dentro del bucle?
      /*
		   for (int i=0; i<total_utilizados; i++){
            if (isupper(vector_privado[i])){
   			   Elimina(i);
   				i--;         // :-(
   		   }
   	  }
		*/
		// NO. Jam�s modificaremos la variable contadora de un for dentro del bucle.
		// Usamos un bucle while, incrementado i dentro de un else:

      int i;
      i = 0;

      while (i < total_utilizados){
         if (isupper(vector_privado[i]))
            Elimina(i);
         else
            i++;
      }
	}

	void EliminaMayusculas(){
      // El siguiente algoritmo es mucho m�s eficiente.
      // En vez de usar dos bucles anidados, resolvemos el problema con un �nico bucle.

		/*
      Usamos dos "apuntadores":
            pos_lectura: para ir leyendo las componentes
            pos_escritura: para ir colocando las componentes en el sitio correcto.

      Algoritmo:

		   Recorrer todas las componentes que hay en el vector
			   Si la componente actual no es may�scula
				   ponedla donde indique pos_escritura
			   Avanzar pos_lectura

		   Actualizar el n�mero de componentes utilizadas
		*/
		int pos_escritura, pos_lectura;

      pos_escritura = 0;
      pos_lectura = 0;

      while (pos_lectura < total_utilizados){
         if (! isupper(vector_privado[pos_lectura])){
            vector_privado[pos_escritura] = vector_privado[pos_lectura];
            pos_escritura++;
         }

         pos_lectura++;
      }

      total_utilizados = pos_escritura;
   }
};

int main(){
	/*
	Bater�a de pruebas:
		- Secuencia sin may�sculas
		- Secuencia s�lo con may�suculas
		- Secuencia vac�a
		- Secuencia con una s�la componente (may�scula o no)
	*/
   SecuenciaCaracteres cadena;
   int tope;

	cadena.AniadeCadena("AABBa");
	cadena.EliminaMayusculas();

	tope = cadena.TotalUtilizados();

	for (int i = 0; i < tope; i++)
      cout  << cadena.Elemento(i) << " ";

   cout << "\n\n";

}

