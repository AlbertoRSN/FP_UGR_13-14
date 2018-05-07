#include <iostream>

using namespace std;

class Recta{

private:
    double A, B, C, x, y;

public:

    void Constructor(double &Aa, double &Bb, double &Cc){
        A=Aa;
        B=Bb;
        C=Cc;
    }

    double GetA(){
        return A;
    }

    double GetB(){
        return B;
    }

    double GetC(){
        return C;
    }

    double Getx(){
        return x;
    }

    double Gety(){
        return y;
    }


    double Pendiente(double A, double B){
        double resultado;

        resultado = -A/B;

        return resultado;

    }


    double ObtenerY(double C, double abcisa, double A, double B){
        double resultadoY;

        resultadoY=(-C -(abcisa * A))/B;

        return resultadoY;

    }

    double ObtenerX(double C, double ordenada, double B, double A){
        double resultadoX;

        resultadoX=(-C -(ordenada * B))/A;

        return resultadoX;

    }
};

int main(){

Recta r1, r2;
double A, B, C;

cout<<"------------RECTA 1--------------\n";

cin>>A>>B>>C;

r1.Constructor(A, B, C);

cout<<"A="<<r1.GetA()<<"\nB="<<r1.GetB()<<"\nC="<<r1.GetC();




cout<<"\nRecta -----> "<<r1.GetA()<<"x+"<<r1.GetB()<<"y+"<<r1.GetC()<<"=0";

cout<<"\n\nLa pendiente es: "<<r1.Pendiente(r1.GetA(), r1.GetB());




cout<<"\n\n------------RECTA 2--------------\n";

cin>>A>>B>>C;

r2.Constructor(A, B, C);

cout<<"A="<<r2.GetA()<<"\nB="<<r2.GetB()<<"\nC="<<r2.GetC();



cout<<"\nRecta -----> "<<r2.GetA()<<"x+"<<r2.GetB()<<"y+"<<r2.GetC()<<"=0";

cout<<"\n\nLa pendiente es: "<<r2.Pendiente(r2.GetA(), r2.GetB());



    cout<<"\n\n";


}
