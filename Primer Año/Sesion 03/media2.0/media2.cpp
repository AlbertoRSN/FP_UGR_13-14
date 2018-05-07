/* Alberto Rodríguez Santana
Con este programa calcularemos la media aritmetica muestral y
la desviacion tipica de la media de la altura de tres personas. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double media, desviacion, a1, a2, a3;

    cout<< "Introduce la altura de la persona 1 en centimetros: ";
    cin>> a1;
    cout<< "Introduce la altura de la persona 2 en centimetros: ";
    cin>> a2;
    cout<< "Introduce la altura de la persona 3 en centimetros: ";
    cin>> a3;

//Calculo de la media aritmetica.
    media=((0.3*(a1+a2+a3)));

//Calculo de la desviacion estandar.
    desviacion=sqrt(0.5*((pow(a1-media,2)+(pow(a2-media,2)+(pow(a3-media,2))))));;

    cout<< "El resultado de la media aritmetica es: " << media << endl;

    cout<< "El resultado de la desviacion estandar es: " << desviacion << endl;

//Usamos condicionales para mostrar si el valor de las alturas es >= media o <= media

    {if (a1>=media)
        cout<< "La altura 1: " << a1 << "(ctmrs) " << " es mayor o igual que la media: " << media << endl;
    }
    {if (a1<media)
        cout<< "La altura 1: " << a1 << "(ctmrs) " << " es menor que la media: " << media<<endl;
}
    {if (a2>=media)
        cout<< "La altura 2: " << a2 << "(ctmrs) " << " es mayor o igual que la media: " << media << endl;
    }
    {if (a2<media)
        cout<< "La altura 2: " << a2 << "(ctmrs) " << " es menor que la media: " << media<<endl;
    }
    {if (a3>=media)
        cout<< "La altura 3: " << a3 << "(ctmrs) " << " es mayor o igual que la media: " << media << endl;
    }
    {if (a3<media)
        cout<< "La altura 3: " << a3 << "(ctmrs) " << " es menor que la media: " << media<<endl;
    }


}

