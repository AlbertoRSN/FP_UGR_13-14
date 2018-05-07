#include <iostream>

using namespace std;


int buscarNumero(int k, int mi, int ma){
    int numeroapariciones=0;
    int div_10;

    for(int i=mi; i<=ma; i++){
            div_10=i;

        while(div_10>0){
            if(div_10%10==k)
                numeroapariciones++;

        div_10=div_10/10;
        }
    }

    return numeroapariciones;
}

int main(){

int k, mi, ma, resultado;

cout<<"Introduce el numero que quieres buscar: ";
cin>>k;

cout<<"Introduce el intervalor en el que lo quieres buscar [a,b]: ";
cout<<"\n\nMinimo: ";
cin>>mi;
do{
cout<<"Maximo: ";
cin>>ma;
}while(ma<mi);

resultado=buscarNumero(k,mi,ma);

cout<<"\nEl numero de veces que aparece el numero "<< k <<" en el intervalo ["<<mi<<","<<ma<<"] es: "<<resultado<<" veces.";

}



