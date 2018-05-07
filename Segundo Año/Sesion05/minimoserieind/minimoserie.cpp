#include <iostream>

using namespace std;

int main()
{
    int dato, contador=0;
    const int FIN=0;

    do{
        cout<<"Introduce numero: "<<endl;
        cin>>dato;
        if(dato!=FIN)
            contador ++;

    }while(dato!=FIN);

    cout<<"Ha introducido "<<contador<<" datos."<<endl;

    return 0;
}
