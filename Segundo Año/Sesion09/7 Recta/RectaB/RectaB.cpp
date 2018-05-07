#include <iostream>

using namespace std;

class Recta{

private:
    double A, B, C;

public:
    double GetA(){
        return A;
    }

    void SetA(double prim){
        A=prim;
    }

    double GetB(){
        return B;
    }

    void SetB(double segun){
        B=segun;
    }

    double GetC(){
        return C;
    }

    void SetC(double tercer){
        C=tercer;
    }

    double Pendiente(double A, double B){
        double resultado;

        resultado = -A/B;

        return resultado;

    }
};

int main(){

Recta r1, r2;
double a, b, c;

cout<<"------------RECTA 1--------------\n";

cout<<"\nIntroduce primer coeficiente: ";
cin>>a;

cout<<"Introduce segundo coeficiente: ";
cin>>b;

cout<<"Introduce tercer coeficiente: ";
cin>>c;

r1.SetA(a);
r1.SetB(b);
r1.SetC(c);

cout<<"\n"<<r1.GetA()<<"x+"<<r1.GetB()<<"y+"<<r1.GetC()<<"=0";

cout<<"\n\nLa pendiente es: "<<r1.Pendiente(r1.GetA(), r1.GetB());



cout<<"\n\n------------RECTA 2--------------\n";

cout<<"\nIntroduce primer coeficiente: ";
cin>>a;

cout<<"Introduce segundo coeficiente: ";
cin>>b;

cout<<"Introduce tercer coeficiente: ";
cin>>c;

r2.SetA(a);
r2.SetB(b);
r2.SetC(c);

cout<<"\n"<<r2.GetA()<<"x+"<<r2.GetB()<<"y+"<<r2.GetC()<<"=0";

cout<<"\n\nLa pendiente es: "<<r2.Pendiente(r2.GetA(), r2.GetB());

    cout<<"\n\n";


}
