#include <iostream>

using namespace std;

int main()
{
    char c;


    do{

    cout<<"\n Introduce un caracter: ";
    cin>>c;

    }while(c>'a' && c<'z');

    c = c + ('a' - 'A');

    cout<<c;

}
