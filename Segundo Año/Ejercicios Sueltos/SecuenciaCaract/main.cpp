#include <iostream>
#include <string>

using namespace std;

class SecuenciaCaracteres{

private:
    static const int TAMANIO=50;
    char vectorp[TAMANIO];
    int totalutilizados;

public:
    SecuenciaCaracteres(){
        totalutilizados=0;
    }

    int getTotalUtilizados(){
        return totalutilizados;
    }

    int Capacidad(){
        return TAMANIO;
    }

    void Aniade(char nuevo){
        if(totalutilizados<TAMANIO)
        {
            vectorp[totalutilizados]=nuevo;
            totalutilizados++;
        }
    }

    void AniadeCadena(string nuevo){
        int util=nuevo.size();

        for(int i=0; i<util; i++){
            Aniade(nuevo[i]);
        }

    }

    char getElemento(int posicion){
        return vectorp[posicion];
    }

    void Modifica(int indice, char nuevo){
        if(indice<totalutilizados)
            vectorp[indice]=nuevo;
    }

    void IntercambiaComponentes(int indice1, int indice2){
        char aux;

        if(indice1<totalutilizados && indice2<totalutilizados)
        {
            aux=vectorp[indice1];
            vectorp[indice1]=vectorp[indice2];
            vectorp[indice2]=aux;
        }
    }

    void Invierte(){
        int util=totalutilizados-1;

        for(int i=0; i<util; i++){
            IntercambiaComponentes(i,util);
            util--;
        }
    }

    void Elimina(int indice){

        int util=totalutilizados-1;

        if(indice>=0 && indice<totalutilizados)
        {

            for(int i=indice; i<util; i++)
                vectorp[i]=vectorp[i+1];
            totalutilizados--;
        }
    }

    void EliminaMayusculas(){
        for(int i=0; i<totalutilizados; i++)
            if(vectorp[i]>='A' && vectorp[i]<='Z')
                Elimina(i);

    }

};


int main()
{

    SecuenciaCaracteres cadena;

    cadena.AniadeCadena("Alberto Rodriguez");

    for(int i=0; i<cadena.getTotalUtilizados(); i++)
        cout<<cadena.getElemento(i);

    cadena.IntercambiaComponentes(1,4);

    cout<<"\n\n\n";

    for(int i=0; i<cadena.getTotalUtilizados(); i++)
        cout<<cadena.getElemento(i);

    cout<<endl;


    cadena.Modifica(2,'s');

    cout<<"\n\n\n";

    for(int i=0; i<cadena.getTotalUtilizados(); i++)
        cout<<cadena.getElemento(i);

    cout<<endl;


    cadena.Invierte();

    cout<<"\n\n\n";

    for(int i=0; i<cadena.getTotalUtilizados(); i++)
        cout<<cadena.getElemento(i);

    cout<<endl;

    cadena.Elimina(4);

    cout<<"\n\n\n";

    for(int i=0; i<cadena.getTotalUtilizados(); i++)
        cout<<cadena.getElemento(i);

    cout<<endl;

    cadena.EliminaMayusculas();

    cout<<"\n\n\n";

    for(int i=0; i<cadena.getTotalUtilizados(); i++)
        cout<<cadena.getElemento(i);

    cout<<endl;

}

