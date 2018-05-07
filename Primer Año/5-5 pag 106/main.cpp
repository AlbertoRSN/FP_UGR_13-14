#include <iostream>

using namespace std;

//PROTORIPOS//

double media(double a, double b, double c);

int main()
{
    cout<<"La media de los tres numeros es: "<<media(23,3,12)<<endl;
}


//IMPLEMENTACION//

double media(double a, double b, double c){
    const int med=3;
    return (a*b*c)/med;
}
