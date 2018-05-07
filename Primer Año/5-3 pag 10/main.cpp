#include <iostream>

using namespace std;

float area_circulo(float r){
    float const PI=3.1416;
    return r*r*PI;
}

int main()
{
    cout<<"El area del circulo es: " << area_circulo(6.24)<< endl;
}
