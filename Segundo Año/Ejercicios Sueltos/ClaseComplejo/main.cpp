#include <iostream>

using namespace std;

class Complejo{

    private:
        float real, imaginario;

    public:
        float GetReal(){
            return real;
        }
        float GetImaginario(){
            return imaginario;
        }

        void SetReal(float datoReal){
            real=datoReal;
        }

        void SetImaginario(float datoImaginario){
            imaginario=datoImaginario;
        }

        Complejo Suma(Complejo c2){
            Complejo resultado;

            resultado.real=real + c2.real;
            resultado.imaginario=imaginario + c2.imaginario;

            return resultado;
        }


};


int main()
{
    Complejo c1, c2, resultado;
    float imaginaria1, real1, real2, imaginaria2;


    //Lecturas

    cout<<"-----------PRIMER NUMERO COMPLEJO--------------\n";
    cout<<"\nIntroduce la parte real: ";
    cin>>real1;

    cout<<"Introduce la parte imaginaria: ";
    cin>>imaginaria1;

    c1.SetReal(real1);
    c1.SetImaginario(imaginaria1);

    cout<<"\nNumero complejo 1 ---> "<<c1.GetReal()<<" + "<<c1.GetImaginario()<<"i";


    cout<<"\n\n-----------SEGUNDO NUMERO COMPLEJO--------------\n";

    cout<<"\nIntroduce la parte real: ";
    cin>>real2;

    cout<<"Introduce la parte imaginaria: ";
    cin>>imaginaria2;

    c2.SetReal(real2);
    c2.SetImaginario(imaginaria2);

    cout<<"\nNumero complejo 2 ---> "<<c2.GetReal()<<" + "<<c2.GetImaginario()<<"i";

    cout<<"\n\n------------------SUMA--------------------";

    resultado=c1.Suma(c2);

    //Resultado de la suma.
    cout<<"\n\nLa suma es: "<<resultado.GetReal()<<" + "<<resultado.GetImaginario()<<"i."<<endl;

}
