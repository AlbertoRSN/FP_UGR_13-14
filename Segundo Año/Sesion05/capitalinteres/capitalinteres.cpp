#include <iostream>

using namespace std;

int main()
{
    double capital, interes, total;

    cout<<"Introduce el capital anual: "<<endl;
    cin>>capital;

    cout<<"Introduce el interes: "<<endl;
    cin>>interes;

    total = capital + capital * (interes/100);

    cout<<"El total anual resulta ser: "<<total<<" euros."<<endl;
}
