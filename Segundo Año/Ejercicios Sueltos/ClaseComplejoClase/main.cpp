#include <iostream>

using namespace std;

class Complejo{

    private:
        float real;
        float imaginario;

    public:
        void SetReal(float re){
            real=re;
        }

        void SetImaginario(float im){
            imaginario=im;
        }

        float GetReal(){
            return real;
        }

        float GetImaginario(){
            return imaginario;
        }

        Complejo Suma(Complejo c2){
            Complejo resultado;

            resultado.real=real+c2.real;
            resultado.imaginario=imaginario+c2.imaginario;

            return resultado;

        }

};



int main()
{
    Complejo c1, c2, resultado;
    float r, i;

    cout<<"------------Complejo 1----------------";

    cout<<"\n\nIntroduce la parte real: ";
    cin>>r;

    c1.SetReal(r);

    cout<<"Introduce la parte imaginaria: ";
    cin>>i;

    c1.SetImaginario(i);

    cout<<"\nNumero complejo 1 ---> "<<c1.GetReal()<<" + "<<c1.GetImaginario()<<"i"<<endl;

    cout<<"\n\n------------Complejo 2----------------";

    cout<<"\n\nIntroduce la parte real: ";
    cin>>r;

    c2.SetReal(r);

    cout<<"Introduce la parte imaginaria: ";
    cin>>i;

    c2.SetImaginario(i);

    cout<<"\nNumero complejo 2 ---> "<<c2.GetReal()<<" + "<<c2.GetImaginario()<<"i"<<endl;

    cout<<"\n\n---------------Suma-----------------";

    resultado=c1.Suma(c2);

    cout<<"\n\nLa suma es: "<<resultado.GetReal()<<"+"<<resultado.GetImaginario()<<"i"<<endl;


}
