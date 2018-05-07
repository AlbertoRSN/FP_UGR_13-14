#include <iostream>

using namespace std;

class Recta{

private:
    double A, B, C;

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

    void LeerDatos(){

        double primer, segundo, tercer;

        cout<<"\nIntroduce primer coeficiente: ";
        cin>>primer;
        A=primer;

        cout<<"Introduce segundo coeficiente: ";
        cin>>segundo;
        B=segundo;

        cout<<"Introduce tercer coeficiente: ";
        cin>>tercer;
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

cout<<"------------RECTA 1--------------\n";

r1.LeerDatos();


cout<<"\n"<<r1.GetA()<<"x+"<<r1.GetB()<<"y+"<<r1.GetC()<<"=0";

cout<<"\n\nLa pendiente es: "<<r1.Pendiente(r1.GetA(), r1.GetB());



cout<<"\n\n------------RECTA 2--------------\n";

r2.LeerDatos();

cout<<"\n"<<r2.GetA()<<"x+"<<r2.GetB()<<"y+"<<r2.GetC()<<"=0";

cout<<"\n\nLa pendiente es: "<<r2.Pendiente(r2.GetA(), r2.GetB());

    cout<<"\n\n";


}
