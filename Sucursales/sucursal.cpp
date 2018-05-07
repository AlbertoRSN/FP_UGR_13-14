#include <iostream>

using namespace std;

int main()
{
    int sucursal, producto, unidades;
    int auxsucursal=1, auxproducto, auxunidades, contadorunidades=0;
    const int FIN=-1;
    bool sucursalMAS=true;

    //filtramos la sucursal de entrada.
    do{
        cout<<"Sucursal: ";
        cin>>sucursal;
    }while(sucursal<1 || sucursal>3);

        //Filtramos producto y unidades.
        while(sucursal!=FIN){

            do{
                cout<<"Producto: ";
                cin>>producto;
            }while(producto<1 || producto>3);

            do{
                cout<<"Unidades vendidas: ";
                cin>>unidades;
            }while(unidades<=0);

                    sucursalMAS=sucursal>=auxsucursal;
                    contadorunidades=unidades;
                    if(unidades>=auxunidades){
                        auxunidades=unidades;
                        auxproducto=producto;
                        auxsucursal=sucursal;
                    }

                    else if(sucursal==sucursalMAS)
                        if(sucursalMAS || unidades>contadorunidades){
                            auxproducto=producto;
                            auxsucursal=sucursal;
                            auxunidades=unidades;

                        }

            do{
                cout<<"Sucursal: ";
                cin>>sucursal;
            }while((sucursal<1 || sucursal>3) && sucursal!=FIN);

                    }

                 cout<<"\n SUCURSAL: "<<auxsucursal<<"\n UNIDADES: "<<contadorunidades;

        }


