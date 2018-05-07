#include <iostream>

using namespace std;

int main()
{
    int edad_juan, edad_pedro;
    int auxiliar;

   cout<<"Introduce la edad de juan: ";
   cin>>edad_juan;

   cout<<"Introduce la edad de Pedro: ";
   cin>>edad_pedro;

   auxiliar=edad_juan;
   edad_pedro=auxiliar;
   edad_juan=edad_pedro;

   cout<<"La edad de Pedro es: "<<edad_pedro<<" y la edad de Juan es "<<edad_juan<<"."<<endl;



}
