#include <iostream>

using namespace std;

double Serie(){
    int i;
    double suma, a;

    for(i=1; i<=100; i++){

        if(i%2!=0)
            a=(((i*i)-1)/2.0*i)*-1;
        else
            a=(((i*i)-1)/2.0*i);

        suma=suma+a;
   }

    return suma;
}

int main()
{
    /* main para la funcion SERIE
   double resultado;

   resultado=Serie();

   cout<<resultado;

    */

}
