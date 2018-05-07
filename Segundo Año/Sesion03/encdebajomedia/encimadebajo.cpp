#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a1, a2, a3; //definicion de las 3 alturas.
    double media, desviacion;

    cout<<"Introduce la altura de la persona 1: ";
    cin>>a1;

    cout<<"Introduce la altura de la persona 2: ";
    cin>>a2;

    cout<<"Introduce la altura de la persona 3: ";
    cin>>a3;


    media =(a1 + a2 + a3)/3; //formula de la media.

    desviacion = sqrt((((a1-media)*(a1-media)) + ((a2-media)*(a2-media)) + ((a3-media)*(a3-media)))/3); //formula desviacion.

    cout<<"\nLa media es: " <<media<<" y la desviacion tipica: "<<desviacion<<"\n ";

    if(a1>=media)
        cout<<a1<<" Es mayor o igual que su media.\n ";
    else
        cout<<a1<<" Es menor que su media. \n ";

    if(a2>=media)
        cout<<a2<<" Es mayor o igual que su media. \n";
    else
        cout<<a2<<" Es menor que su media. \n";

    if(a3>=media)
        cout<<a3<<" Es mayor o igual que su media. \n ";
    else
        cout<<a3<<" Es menor que su media. ";


}
