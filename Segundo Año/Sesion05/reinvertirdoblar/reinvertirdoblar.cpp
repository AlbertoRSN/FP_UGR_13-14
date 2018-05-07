#include <iostream>

using namespace std;

int main(){
     double capital;
     double interes;
     double total;
    int i;
    cout << "Capital depositado: ";
    cin >> capital;
    cout << "Introduzca el interes: ";
    cin >> interes;

for(i=0; i<=2*capital; i++){
    total = capital + (capital * interes/100);
    total = total + total * i;
    }

    cout<<"\n En el anio " << i << " se habra duplicado el capital y el total sera de: " << total<<"\n"<<endl;

}
