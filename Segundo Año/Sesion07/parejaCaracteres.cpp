#include <iostream>

using namespace std;

int main()
{
    char min1, min2, min3, min4;

    cout<<"Caracter 1: ";
    cin>>min1;

    do{
    cout<<"Caracter 2: ";
    cin>>min2;
    }while(min2<min1);

    cout<<"Caracter 3: ";
    cin>>min3;

   do{
    cout<<"Caracter 4: ";
    cin>>min4;
   }while(min4<min3);

    for(char i=min1; i<=min2; i++){
      for(char j=min3; j<=min4; j++)
         cout<<i<<j<<", ";
    }
}
