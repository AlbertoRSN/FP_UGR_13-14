#include <iostream>

using namespace std;

int main()
{
    char letra;
    double kmts;
    const int km1=200;
    const int km2=600;
    const int km3=1100;
    const int tarifa=150;
    double preciototal;
    double preciototaldescuento;
    const int descuento1=15;
    const float tarifa200=0.1;
    bool cliente_nuevo=true;
    bool cliente_previo=true;

//Primera parte donde comenzamos preguntando al cliente si es un cliente nuevo, para mas tarde aplicar descuentos.

    cout<< "¿Es usted cliente previo de la empresa? Responde [S]i/[N]o ";
    cin>> letra;
if (letra == 's' || letra== 'S' || letra== 'N' || letra== 'n')
 {
    switch (letra)
    {
    case 's':
    case 'S':
    cliente_nuevo=false;
    cliente_previo=true;

        cout<< "Escogio SI, es cliente previo de la empresa." << endl;
        break;

    case 'n':
    case 'N':

    cliente_previo=false;
    cliente_nuevo=true;
        cout<< "Escogio NO, es un cliente Nuevo." << endl;
        break;
    }
 }

else{
        cout<< "Usted no ha respondio [S]i/[N]o " << endl;
    }


//Empezamos la segunda parte del programa.

cout<< "Introduzca el numero de kilometros que va a realizar: " << endl;
cin>>kmts;

//PARA CLIENTE NUEVO:

if (cliente_nuevo)
{

    if (kmts < km1)
    {
        preciototal=tarifa;
        cout<< "El precio de su viaje sin descuento es de: " << tarifa << " Euros" << endl;

        preciototaldescuento=tarifa-descuento1;
        cout<< "El precio de su viaje con la rebaja lineal de la compañia es de: " << preciototaldescuento << " Euros" << endl;

    }
    else ((kmts >= km1) && (kmts < km2));
    {
        preciototal=(kmts*tarifa200)+tarifa;
        cout<< "El precio de su viaje es de: " << preciototal << " Euros" << endl;

        preciototaldescuento=preciototal-descuento1;
        cout<< "El precio de su viaje con la rebaja lineal de la compañia es de: " << preciototaldescuento << " Euros" << endl;
    }


}


//PARA CLIENTE PREVIO
else (cliente_previo);
{

    if (kmts < km1)
    {
        preciototal=tarifa;
        cout<< "El precio de su viaje sin descuento es de: " << tarifa << " Euros" << endl;

        preciototaldescuento=tarifa-descuento1;
        cout<< "El precio de su viaje con la rebaja lineal de la compañia es de: " << preciototaldescuento << " Euros" << endl;



    }
    else (kmts >= km1) && (kmts < km2);
    {
        preciototal=(kmts*tarifa200)+tarifa;
        cout<< "El precio de su viaje es de: " << preciototal << " Euros" << endl;

        preciototaldescuento=preciototal-descuento1;
        cout<< "El precio de su viaje con la rebaja lineal de la compañia es de: " << preciototaldescuento << " Euros" << endl;

        if ((kmts >= km2) && (kmts < km3));
        {
            preciototaldescuento=((preciototal-descuento1)-(0.03*(preciototal-descuento1)));

            cout<< "El precio de su viaje con el descuento del 3% por mas de 600kmts es: " << preciototaldescuento << endl;
        }

        if (kmts >= km3)
        {
      preciototaldescuento=((preciototal-descuento1)-(0.04*(preciototal-descuento1)));

            cout<< "El precio de su viaje con el descuento del 4% por tarifa de mas de 600kmts y menos de 1100kmts es: " << preciototaldescuento << endl;
        }
    }


preciototaldescuento=(preciototaldescuento-(0.05*preciototaldescuento));
cout<< "Por ser cliente previo de la compañia aplicamos un 5% de descuento y el coste de su billete es: " << preciototaldescuento << endl;

}
}


