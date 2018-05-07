/*Alberto Rodriguez Santana
Programa: Juego para adivinar un numero que la maquina piensa aleatoriamente.
A traves de cout vamos dando pistas si es mas grande o mas pequeño*/



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
            cout<<"\n!El numero que has introducido es mas pequeño!"<<endl;
    else if (num>incognita && num!= FIN)
            cout<<"\n!El numero que has introducido es mas grande!"<<endl;

    else{

        if(num == incognita)
        cout<<"\n!Enhorabuena! Has acertado el numero.";}

}while((num != FIN) && (num != incognita));

}
