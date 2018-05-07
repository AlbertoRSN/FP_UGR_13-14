#include <iostream>

using namespace std;


class Recta{

    public:
        double A, B, C;


};


int main(){

Recta r1, r2;

    cout<<"------------RECTA 1-------------\n";

    cout<<"Introduce el primer coeficiente: ";
    cin>>r1.A;

    cout<<"Introduce el segundo coeficiente: ";
    cin>>r1.B;

    cout<<"Introduce el tercer coeficiente: ";
    cin>>r1.C;

    cout<<"\nRecta 1 -----> "<<r1.A<<"x+"<<r1.B<<"y+"<<r1.C;

    cout<<"\n\nLa pendiente es: "<<-r1.A/r1.B;


    cout<<"\n\n------------RECTA 2-------------\n";

    cout<<"Introduce el primer coeficiente: ";
    cin>>r2.A;

    cout<<"Introduce el segundo coeficiente: ";
    cin>>r2.B;

    cout<<"Introduce el tercer coeficiente: ";
    cin>>r2.C;

    cout<<"\nRecta 2 -----> "<<r2.A<<"x+"<<r2.B<<"y+"<<r2.C;

    cout<<"\n\nLa pendiente es: "<<-r2.A/r2.B;

    cout<<"\n\n";




};
