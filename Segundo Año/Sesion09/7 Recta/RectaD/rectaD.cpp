#include <iostream>

using namespace std;

class Recta{

private:
    double A, B, C, x, y;

public:

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

    void LeerDatos(){

        double primer, segundo, tercer,abcisa, ordenada;

        cout<<"\nIntroduce primer coeficiente: ";
        cin>>primer;
        A=primer;

        cout<<"Introduce segundo coeficiente: ";
        cin>>segundo;
        B=segundo;

        cout<<"Introduce tercer coeficiente: ";
        cin>>tercer;
        C=tercer;

        cout<<"Introduce el valor de abcisa X: ";
        cin>>abcisa;
        x=abcisa;

        cout<<"Introduce el valor de ordenada Y: ";
        cin>>ordenada;
        y=ordenada;


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

cout<<"------------RECTA 1--------------\n";

r1.LeerDatos();


cout<<"\nRecta -----> "<<r1.GetA()<<"x+"<<r1.GetB()<<"y+"<<r1.GetC()<<"=0";

cout<<"\n\nLa pendiente es: "<<r1.Pendiente(r1.GetA(), r1.GetB());

cout<<"\n\nCalculamos Y para el valor de abcisa (x)="<<r1.Getx()<<" y el resultado es y= "<<r1.ObtenerY(r1.GetC(), r1.Getx(), r1.GetA(), r1.GetB());

cout<<"\n\nCalculamos X para el valor de ordenada (y)="<<r1.Getx()<<" y el resultado es x= "<<r1.ObtenerX(r1.GetC(), r1.Gety(), r1.GetB(), r1.GetA());



cout<<"\n\n------------RECTA 2--------------\n";

r2.LeerDatos();

cout<<"\nRecta ----->"<<r2.GetA()<<"x+"<<r2.GetB()<<"y+"<<r2.GetC()<<"=0";

cout<<"\n\nLa pendiente es: "<<r2.Pendiente(r2.GetA(), r2.GetB());

cout<<"\n\nCalculamos Y para el valor de abcisa (x)="<<r2.Getx()<<" y el resultado es y= "<<r2.ObtenerY(r2.GetC(), r2.Getx(), r2.GetA(), r2.GetB());

cout<<"\n\nCalculamos X para el valor de ordenada (y)="<<r2.Getx()<<" y el resultado es x= "<<r2.ObtenerX(r2.GetC(), r2.Gety(), r2.GetB(), r2.GetA());


    cout<<"\n\n";


}
