#include <iostream>

using namespace std;

int main()
{
    int numeroE, numero, contador=0;

    cout<<"Introduce un numero: "<<endl;
    cin>>numeroE;

    while(numeroE>0){
        numeroE=numeroE/10;
        numero=numeroE%10;
        contador++;

    };

    //cout<<"Tiene "<<contador<<" digitos."<<endl;
    cout<<numero<<"   ";
}
