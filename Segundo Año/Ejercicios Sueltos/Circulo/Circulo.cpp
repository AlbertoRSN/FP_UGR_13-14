#include <iostream>

using namespace std;

class Circulo{
    private:
        int x;
        int y;
        double radio;

    public:
        Circulo(){
            x=0;
            y=0;
            radio=1.0;
        }

        Circulo(int xx, int yy, double r){
            x=xx;
            y=yy;
            radio=r;
        }

        void SetX(int lado_x){
            x=lado_x;
        }

        void SetY(int lado_y){
            y=lado_y;
        }

        void SetRadio(double radio_nuevo){
            radio=radio_nuevo;
        }

        int GetX(){
            return x;
        }

        int GetY(){
            return y;
        }

        double GetRadio(){
            return radio;
        }


        bool MayorQue(Circulo otro){
            return (radio>otro.GetRadio());
        }

};


int main()
{

    const int TAM=4;
    Circulo vector[TAM];
    int contadorMayor=0;


    Circulo uno(0,0,1.0), otro(0,0,3.0);

    for(int i=0; i<TAM; i++){
        vector[i]=uno;
        uno.SetX(i+1);
        uno.SetY(i+1);
    }

    for(int j=0; j<TAM; j++){
        if(otro.MayorQue(vector[j])){
            contadorMayor++;
        }
    }


    cout<<"El circulo con las coordenadas (0,0,3) es mayor que los demas: "<<contadorMayor<<" veces.";

}
