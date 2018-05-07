#include <iostream>

using namespace std;

int main()
{
    int horasE, minutosE, segundosE;
    int horasS, minutosS, segundosS, dias;

    cout<<"Horas: ";
    cin>>horasE;

    cout<<"Minutos: ";
    cin>>minutosE;

    cout<<"Segundos: ";
    cin>>segundosE;

    segundosS = segundosE % 60;

    minutosS = (((segundosE/60)+minutosE)%60);

    horasS = ((((minutosE+minutosS) / 60)+horasE)%24);

    dias = (horasE+horasS)/24;


    cout<<"\n Para los datos introducidos, obtenemos: \n"<<dias<<" Dias, "<<horasS<<" Horas, "<<minutosS<<" Minutos, "<<segundosS<<" Segundos. ";

}
