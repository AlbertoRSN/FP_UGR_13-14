#include <iostream>
#include <cmath>
using namespace std;


class SecuenciaEnteros{
private:
   static const int TAMANIO = 50;
   int vector_privado[TAMANIO];
   int total_utilizados;

   void IntercambiaComponentes_en_Posiciones(int pos_izda, int pos_dcha){
      int intercambia;

      intercambia = vector_privado[pos_izda];
      vector_privado[pos_izda] = vector_privado[pos_dcha];
      vector_privado[pos_dcha] = intercambia;
   }
public:
   SecuenciaEnteros(){
    total_utilizados=0;
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




class MatrizRectangularEnteros{
private:
   static const int MAX_FIL = 50;
   static const int MAX_COL = 40;
   int matriz_privada[MAX_FIL][MAX_COL];
   int util_fil;
   const int util_col;
public:
   MatrizRectangularEnteros(int numero_de_columnas){
        util_fil=0;
       util_col=numero_de_columnas;

   }
   MatrizRectangularEnteros(SecuenciaEnteros primera_fila)
      {
        util_fil=0;
       util_col=primera_fila.TotalUtilizados();

   }
   int CapacidadFilas(){
      return MAX_FIL;
   }
   int FilasUtilizadas(){
      return util_fil;
   }
   int ColUtilizadas(){
      return util_col;
   }
   int Elemento(int fila, int columna){
      return matriz_privada[fila][columna];
   }
   SecuenciaEnteros Fila(int indice_fila){
      SecuenciaEnteros fila;

      for (int col = 0; col < util_col; col++)
         fila.Aniade(matriz_privada[indice_fila][col]);

      return fila;
   }

   void Aniade(SecuenciaEnteros fila_nueva){
      int numero_columnas_nueva;

      if (util_fil < MAX_FIL){
         numero_columnas_nueva = fila_nueva.TotalUtilizados();

         if (numero_columnas_nueva == util_col){
            for (int col = 0; col < util_col ; col++)
               matriz_privada[util_fil][col] = fila_nueva.Elemento(col);

            util_fil++;
         }
      }
   }

   bool EsIgual_a (MatrizRectangularEnteros otra_matriz){
      bool son_iguales = true;

      for (int i=0; i<util_fil && son_iguales; i++)
         for (int j=0; j<util_col && son_iguales; j++)
            son_iguales = matriz_privada[i][j] == otra_matriz.Elemento(i,j);

      return son_iguales;
   }

   SecuenciaEnteros Columna(int indice_columna){
      SecuenciaEnteros columna;

      for (int i=0; i<util_fil; i++)
         columna.Aniade(matriz_privada[i][indice_columna]);

      return columna;
   }

   MatrizRectangularEnteros Traspuesta(){
      MatrizRectangularEnteros traspuesta(util_fil);

      for (int j=0; j<util_col; j++)
         traspuesta.Aniade(Columna(j));

      return traspuesta;
   }

   bool EsSimetrica_vs1(){
      return EsIgual_a(Traspuesta());
   }

   bool EsSimetrica_vs2(){
      bool es_simetrica;

      for (int i=0; i<util_fil && es_simetrica; i++)
         for (int j=i+1; j<util_col && es_simetrica; j++)
            es_simetrica = matriz_privada[i][j] == matriz_privada[j][i];

      return es_simetrica;
   }

   MatrizRectangularEnteros Multiplica_por (MatrizRectangularEnteros otra_matriz){
      int columnas_otra_matriz = otra_matriz.ColUtilizadas();
      MatrizRectangularEnteros producto(columnas_otra_matriz);
      SecuenciaEnteros fila_producto;
      int casilla_producto;

      for (int i=0; i<util_fil; i++){
   		for (int j=0; j<columnas_otra_matriz; j++){
            casilla_producto = 0;

            for (int k=0; k<util_col; k++)
               casilla_producto = casilla_producto +  matriz_privada[i][k] * otra_matriz.Elemento(k,j);

            fila_producto.Aniade(casilla_producto);
         }

         producto.Aniade(fila_producto);
         fila_producto.EliminaTodos();
      }

      return producto;
   }

   int PosFilaMasCercana(SecuenciaEnteros referencia, SecuenciaEnteros filas_a_comparar){
      int pos_fila_mas_cercana;
      double dist_minima;
      int util_filas_a_comparar = filas_a_comparar.TotalUtilizados();

      if (util_filas_a_comparar > 0 && referencia.TotalUtilizados() == util_col){
         int pos_fila_a_comparar = filas_a_comparar.Elemento(0);
         pos_fila_mas_cercana = pos_fila_a_comparar;
         dist_minima = Fila(pos_fila_a_comparar).DistanciaEuclidea(referencia);

         for (int i=1; i<util_filas_a_comparar; i++){
            pos_fila_a_comparar = filas_a_comparar.Elemento(i);
            double dist =  Fila(pos_fila_a_comparar).DistanciaEuclidea(referencia);

            if (dist < dist_minima){
               dist_minima = dist;
               pos_fila_mas_cercana = pos_fila_a_comparar;
            }
         }
      }

      return pos_fila_mas_cercana;
   }
};


int main(){
	int filas_a_leer_matriz, columnas_a_leer_matriz;
   int casilla;
   SecuenciaEnteros fila;
	cin >> filas_a_leer_matriz;
	cin >> columnas_a_leer_matriz;

	MatrizRectangularEnteros matriz(columnas_a_leer_matriz);

	for (int i=0; i<filas_a_leer_matriz; i++){
      for (int j=0; j<columnas_a_leer_matriz; j++){
         cin >> casilla;
         fila.Aniade(casilla);
      }

      matriz.Aniade(fila);
      fila.EliminaTodos();
   }

  	int util_fil_matriz, util_col_matriz;

	util_fil_matriz = matriz.FilasUtilizadas();
	util_col_matriz = matriz.ColUtilizadas();

	cout << "\n\n";
   cout << "Matriz original:\n";

   for (int i=0; i<util_fil_matriz; i++){
      cout << "\n";

      for (int j=0; j<util_col_matriz; j++)
         cout << matriz.Elemento(i,j) << " ";
   }

   MatrizRectangularEnteros traspuesta(matriz.Traspuesta());



   int util_fil_traspuesta, util_col_traspuesta;
   util_fil_traspuesta = traspuesta.FilasUtilizadas();
   util_col_traspuesta = traspuesta.ColUtilizadas();

   cout << "\n\n";
   cout << "Matriz traspuesta:\n";

   for (int i=0; i<util_fil_traspuesta; i++){
      cout << "\n";

      for (int j=0; j<util_col_traspuesta; j++)
         cout << traspuesta.Elemento(i,j) << " ";
   }


   int filas_a_leer_dcha, columnas_a_leer_dcha;
   cin >> columnas_a_leer_dcha;
   filas_a_leer_dcha = util_col_matriz;

   MatrizRectangularEnteros matriz_dcha(columnas_a_leer_dcha);

   fila.EliminaTodos();

	for (int i=0; i<filas_a_leer_dcha; i++){
		for (int j=0; j<columnas_a_leer_dcha; j++){
			cin >> casilla;
			fila.Aniade(casilla);
		}

		matriz_dcha.Aniade(fila);
		fila.EliminaTodos();
   }


   MatrizRectangularEnteros matriz_producto(matriz.Multiplica_por(matriz_dcha));


	int util_fil_producto, util_col_producto;
   util_fil_producto = matriz_producto.FilasUtilizadas();
   util_col_producto = matriz_producto.ColUtilizadas();

   cout << "\n\n";
   cout << "Matriz producto:\n";

   for (int i=0; i<util_fil_producto; i++){
      cout << "\n";

      for (int j=0; j<util_col_producto; j++)
         cout << 	matriz_producto.Elemento(i,j) << " ";
   }


   SecuenciaEnteros referencia;
   SecuenciaEnteros filas_a_comparar;

   for (int i=0; i<util_col_matriz; i++){
      cin >> casilla;
      referencia.Aniade(casilla);
   }

   int numero_filas_a_comparar;
   cin >> numero_filas_a_comparar;

   for (int i=0; i<numero_filas_a_comparar; i++){
      cin >> casilla;
      filas_a_comparar.Aniade(casilla);
   }

   int pos_mas_cercano;

   pos_mas_cercano = matriz.PosFilaMasCercana(referencia, filas_a_comparar);

   cout << "\n\nPosición más cercana: " << pos_mas_cercano;

   cout << "\n\n";


}
