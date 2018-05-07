#include <iostream>

using namespace std;

class DepositoSimulacion{

    private:
        double interes;
        double capital;
        double anios;

    public:
        void LeerDatos(double inte, double cap, double an){
            interes=inte;
            capital=cap;
            anios=an;
        }

        double GetCapital(){
            return capital;
        }

        double GetInteres(){
            return interes;
        }

        double GetAnios(){
            return anios;
        }

        void CalcularCapital(double capital_inicial, double interes, double numero_anios){

            double interes_actual, capital_acumulado;
            double anios_transcurridos;

            for (interes_actual = 1 ; interes_actual <= interes ; interes_actual++){
                cout << "\n\nResultados calculados para un interés del " << interes_actual << "% \n";
                cout << "Capital inicial: " << capital_inicial;

                capital_acumulado = capital_inicial;

                    for (anios_transcurridos = 0 ; anios_transcurridos < numero_anios; anios_transcurridos++){
                        capital_acumulado = capital_acumulado + capital_acumulado * interes_actual / 100.0;
                        cout << "\nCapital obtenido transcurrido el año número " << anios_transcurridos + 1 << " = " << capital_acumulado;
                    }
            }

    }

};


int main(){

    DepositoSimulacion a;

	double interes, capital_inicial;
	int numero_anios;

    cout<<"Introduce (interes, capital, anios): ";
    cin>>interes>>capital_inicial>>numero_anios;

    a.LeerDatos(interes, capital_inicial, numero_anios);

    a.CalcularCapital(capital_inicial, interes, numero_anios);

   cout << "\n\n";

}

