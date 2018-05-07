#include <iostream>

using namespace std;




int main()
{
    int a,suma=0;

   for(int i=1; i<=100; i++){


        if(i%2!=0)
            a=(((i*i)-1)/2*i)*-1;
        else
            a=(((i*i)-1)/2*i);

        suma=suma+a;
   }

   cout<<suma;

}
