#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int MAX=100;
    const int FIN=-1;
    int num,incognita;

    srand(time(0));
    incognita=rand()%MAX;


do{
    cout<<"Introduzca un numero entre 0-99: ";
    cin>>num;

    if(num<incognita && num !=FIN)
            cout<<"¡El numero que has introducido es mas pequeno!"<<endl;
    else if (num>incognita && num!= FIN)
            cout<<"¡El numero que has introducido es mas grande!"<<endl;

    else{

        if(num == incognita)
        cout<<"¡Enhorabuena! Has acertado el numero.";}

}while((num != FIN) && (num != incognita));

}
