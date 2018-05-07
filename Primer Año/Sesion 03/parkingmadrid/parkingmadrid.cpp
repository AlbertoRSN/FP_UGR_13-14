#include <iostream>

using namespace std;

int main()
{
    double tiempo;
    float precio;
    const int t1=0, t2=30, t3=31, t4=90, t5=91, t6=660, t7=661, t8=1440;
    const float p1=0.0411, p2=0.0369, p3=0.0493, pmax=31.5000;


    cout<<"Introduzca el tiempo en minutos que ha estado estacionado en el Parking: ";
    cin>>tiempo;

    if ((tiempo >=t1) && (tiempo <=t2))
       {
           precio=tiempo*p1;

           cout<< "Usted debe pagar: " << precio << " Euros" << endl;
       }
   if ((tiempo >=t3) && (tiempo <=t4))
       {
           precio=tiempo*p2;

           cout<< "Usted debe pagar: " << precio << " Euros" << endl;
       }
   if ((tiempo >=t5) && (tiempo <=t6))
       {
           precio=tiempo*p3;

           cout<< "Usted debe pagar: " << precio << " Euros" << endl;
       }
   if ((tiempo >=t7) && (tiempo <=t8))
       {
           precio=pmax;

           cout<< "Usted debe pagar: " << precio << " Euros" << endl;
       }


}
