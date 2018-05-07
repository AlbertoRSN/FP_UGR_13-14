#include <iostream>

using namespace std;

int main()
{
    char c;

    cout<<"Introduce un caracter: ";
    cin>>c;

    c = c + ('a' - 'A');

    cout<<c;

}
