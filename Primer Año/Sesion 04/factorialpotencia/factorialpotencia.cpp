#include <iostream>

using namespace std;

int main()
{
    int n,i;
    double factorial;

    cout<<"Introduce un numero: ";
    cin>>n;

    factorial=1;

    for(i=2; i<=n; i++)

        factorial=factorial*i;

    cout<< "El factorial de "<<n<<" es: "<<factorial<<endl;

}
