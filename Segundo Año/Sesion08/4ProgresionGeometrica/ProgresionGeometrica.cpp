#include <iostream>


using namespace std;

int Potencia(int base, int exponente){

    int resultado=1;

    for(int i=1; i<=exponente; i++)
        resultado=resultado*base;


    return resultado;

}

double SumaHasta(double termino_primero, double razon, double tope){

    int n;
    double suma_total, termino_n;

        suma_total = termino_primero;

	for (n = 2; n <= tope; n++)
		suma_total = suma_total + termino_primero * Potencia(razon, n-1);


	termino_n = termino_primero;
	suma_total = termino_n;

	for (n = 2; n <= tope ; n++){
		termino_n = termino_n * razon;
		suma_total = suma_total +  termino_n;
	}



}

int main(){

	double termino_primero, razon;
	int tope;
	double resultado;


	cout << "\nIntroduzca el primer termino de la progresion: ";
	cin >> termino_primero;
	cout << "\nIntroduzca la razon de la progresion: ";
	cin >> razon;
	cout << "\nIntroduzca el indice >= 1 del ultimo termino que quiere sumar: ";
	cin >> tope;


	resultado=SumaHasta(termino_primero, razon, tope);



	cout << "\nSuma hasta " << tope << " = " << resultado<<endl;


}
