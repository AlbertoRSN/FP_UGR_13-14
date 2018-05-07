#include <iostream>

using namespace std;

int main()
{
    int triangular, k, i=1;

    cout<<"Introduce un entero: ";
    cin>>k;

    do{
        i++;
        triangular=(i*(i+1))/2.0;

    }while(n>triangular);

    if(k==triangular)
        cout<<"\nEl numero SI es TRIANGULAR.";
    else
        cout<<"\nEl numero NO es TRIANGULAR.";


}
