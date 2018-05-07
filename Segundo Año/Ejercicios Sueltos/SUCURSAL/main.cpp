#include <iostream>

using namespace std;

int main()
{
    int sucursal, producto, unidades;
    int unidades1=0, unidades2=0, unidades3=0;
    const int FIN=-1;

   //Bucle para sucursal.
    do{
      cout<<"Sucursal: ";
      cin>>sucursal;
    }while(sucursal<FIN ||sucursal>3 || sucursal==0);


      while(sucursal!=FIN){

         //Bucle para producto.
         do{
            cout<<"Producto: ";
            cin>>producto;
         }while(producto<1 || producto>3);

         //Bucle para unidades.
         do{
            cout<<"Unidades: ";
            cin>>unidades;
         }while(unidades<=0);


        if(sucursal==1 || sucursal==FIN)
            unidades1=unidades+unidades1;

        if(sucursal==2 || sucursal==FIN)
            unidades2=unidades+unidades2;

        if(sucursal==3 || sucursal==FIN)
            unidades3=unidades+unidades3;



         do{
            cout<<"\nSucursal: ";
            cin>>sucursal;
         }while(sucursal<FIN ||sucursal>3 || sucursal==0);


        if(unidades1>unidades2 && unidades1>unidades3)
            cout<<"SUCURSAL: 1\nUNIDADES: "<<unidades1<<"\n";

        if(unidades1>unidades2 && unidades1>unidades3)
            cout<<"SUCURSAL: 2\nUNIDADES: "<<unidades2<<"\n";

        if(unidades1>unidades2 && unidades1>unidades3)
            cout<<"SUCURSAL: 3\nUNIDADES: "<<unidades3<<"\n";


        };



      }




