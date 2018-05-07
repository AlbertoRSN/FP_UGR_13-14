#include <iostream>

using namespace std;

int main()
{
   int filas, inicio;

   cout<<"Introduce el numero de inicio: ";
   cin>>inicio;

   cout<<"Introduce el numero de filas: ";
   cin>>filas;

    for(int i=inicio; i<=filas+1; i++){
      for(int j=i; j<=filas+1; j++)
         cout<<j<<" ";

         cout<<endl;
    }


   }

