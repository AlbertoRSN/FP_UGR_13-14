#include <iostream>
#include <cmath>

using namespace std;

class SecuenciaEnteros{
private:
   static const int TAMANIO = 50;
   int vector_privado[TAMANIO];
   int total_utilizados;
public:
   SecuenciaEnteros()
      :total_utilizados(0) {
   }
   int TotalUtilizados(){
      return total_utilizados;
   }
   int Capacidad(){
      return TAMANIO;
   }
   void Aniade(int nuevo){
      if (total_utilizados < TAMANIO){
         vector_privado[total_utilizados] = nuevo;
         total_utilizados++;
      }
   }
   int Elemento(int indice){
      return vector_privado[indice];
   }
   void EliminaTodos(){
      total_utilizados = 0;
   }

   void Modifica(int indice_componente, int nuevo){
		if (indice_componente >= 0  &&  indice_componente < total_utilizados)
			vector_privado[indice_componente] = nuevo;
	}

	int PrimeraOcurrenciaEntre (int pos_izda, int pos_dcha, int buscado){
      int i = pos_izda;
      bool encontrado = false;

      while (i <= pos_dcha  &&  !encontrado)
         if (vector_privado[i] == buscado)
            encontrado = true;
         else
            i++;

      if (encontrado)
         return i;
      else
         return -1;
   }

   int PrimeraOcurrencia (int buscado){
      return PrimeraOcurrenciaEntre (0, total_utilizados - 1, buscado);
   }

   double DistanciaEuclidea(SecuenciaEnteros otra_secuencia){
      double distancia;

      if (total_utilizados == otra_secuencia.TotalUtilizados()){
         distancia = 0;

         for (int i=0; i<total_utilizados; i++){
            double diferencia;

            diferencia = vector_privado[i] - otra_secuencia.Elemento(i);
            diferencia = diferencia * diferencia;
            distancia = distancia + diferencia;
         }

         distancia = sqrt(distancia);
      }
      else
         distancia = -1;

      return distancia;
   }
};



class Sudoku{
    private:
        static const int TAMANIO_TABLERO = 9;
        int tablero[TAMANIO_TABLERO][TAMANIO_TABLERO];
        int filas_aniadidas;


	bool CheckFila_vs1(int indice_fila){
		bool encontrado = false;

		for (int a_buscar = 1; a_buscar < 10 && !encontrado; a_buscar++){
			for (int i=0; i<TAMANIO_TABLERO && !encontrado; i++)
				encontrado = (tablero[indice_fila][i] == a_buscar);
		}

		return encontrado;
	}

	bool CheckColumna_vs1(int indice_col){
		bool encontrado = false;

		for (int a_buscar = 1; a_buscar < 10 && !encontrado; a_buscar++){
			for (int i=0; i<TAMANIO_TABLERO && !encontrado; i++)
				encontrado = (tablero[i][indice_col] == a_buscar);
		}

		return encontrado;
	}

	bool CheckFila_vs2(int indice_fila){
		bool encontrado = false;
		SecuenciaEnteros fila(Fila(indice_fila));

		for (int a_buscar = 1; a_buscar < 10 && !encontrado; a_buscar++)
			encontrado = fila.PrimeraOcurrencia(a_buscar);

		return encontrado;
	}

	bool CheckColumna_vs2(int indice_col){
		bool encontrado = false;
		SecuenciaEnteros columna(Columna(indice_col));

		for (int a_buscar = 1; a_buscar < 10 && !encontrado; a_buscar++)
			encontrado = columna.PrimeraOcurrencia(a_buscar);

		return encontrado;
	}

	bool CheckRegion (int fila_inicial, int col_inicial, int tamanio_region){
		bool encontrado = false;
		int tope_fil = fila_inicial + tamanio_region;
		int tope_col = col_inicial + tamanio_region;

		for (int a_buscar = 1; a_buscar < 10 && !encontrado; a_buscar++){
			for (int fila = fila_inicial; fila < tope_fil && !encontrado; fila++)
				for (int col = col_inicial; col < tope_col && !encontrado; col++)
					encontrado = (tablero[fila][col] == a_buscar);
		}

		return encontrado;
	}

public:
	Sudoku (){
		filas_aniadidas=0;
	}
	void AniadeFila (SecuenciaEnteros fila){
		if (filas_aniadidas < TAMANIO_TABLERO){
			for (int col=0; col < TAMANIO_TABLERO; col++)
				tablero[filas_aniadidas][col] = fila.Elemento(col);

			filas_aniadidas++;
		}
	}

	int Tamanio(){
	   return TAMANIO_TABLERO;
	}

	SecuenciaEnteros Fila(int indice_fila){
      SecuenciaEnteros fila;

      for (int j=0; j<TAMANIO_TABLERO; j++)
         fila.Aniade(tablero[indice_fila][j]);

	   return fila;
	}

	SecuenciaEnteros Columna(int indice_col){
      SecuenciaEnteros columna;

      for (int i=0; i<TAMANIO_TABLERO; i++)
         columna.Aniade(tablero[i][indice_col]);

	   return columna;
	}

	int Digito (int fil, int col){
		return tablero[fil][col];
	}

	bool Resuelto(){
		bool resuelto = true;
		int tamanio_region = 3;

		for (int fil = 0; fil < TAMANIO_TABLERO && resuelto; fil++)
			resuelto = CheckFila_vs2(fil);

		for (int col = 0; col< TAMANIO_TABLERO && resuelto; col++)
			resuelto = CheckColumna_vs2(col);

		for (int fil_region = 0;
			fil_region < TAMANIO_TABLERO && resuelto;
			fil_region = fil_region + tamanio_region)

			for (int col_region = 0;
				col_region < TAMANIO_TABLERO && resuelto;
				col_region = col_region + tamanio_region)

				resuelto = CheckRegion(fil_region, col_region, tamanio_region);

		return resuelto;
	}
};

int main(){
   int casilla;
   Sudoku mi_sudoku;
   SecuenciaEnteros fila;
   bool resuelto;

   for (int i=0; i< 9; i++){
      fila.EliminaTodos();

      for (int j=0; j<9; j++){
         cin >> casilla;
         fila.Aniade(casilla);
      }

      mi_sudoku.AniadeFila(fila);
   }

   resuelto = mi_sudoku.Resuelto();

   if (resuelto)
      cout << "\nResuelto";
   else
      cout << "\nNo resuelto";
}
