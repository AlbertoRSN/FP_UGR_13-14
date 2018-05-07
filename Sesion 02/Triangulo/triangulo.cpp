#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double Area, lado1, lado2, grados, radianes;
   const double pi=3.14159;

   cout<< "introduce el valor en cmts del lado1: ";
   cin>> lado1;
   cout<< "Introduce el valos en cmts del lado2: ";
   cin>> lado2;
   cout<< "Introduce los grados del angulo que forma lado1 y lado2: ";
   cin>> grados;

    radianes=(pi*grados)/180;
    cout<< "Los " << grados << " grados son: " << radianes << "Radianes." << endl;

    Area=(lado1*lado2*sin((radianes)))/2;
    cout<< "El Area del triangulo de lado1 " << lado1 << ", de lado2(ctms) " << lado2 << "y " << radianes << "radianes" << "es: " << Area << "cmts^2" << endl;



}
