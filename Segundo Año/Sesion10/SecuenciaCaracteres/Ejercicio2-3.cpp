#include <iostream>

using namespace std;

class SecuenciaCaracteres{
    private:
        static const int TAMANIO = 50;
        char vector_privado[TAMANIO];
        int total_utilizados;

    public:
        SecuenciaCaracteres()
        :total_utilizados(0){
        }

        int TotalUtilizados(){
             return total_utilizados;
        }

        int Capacidad(){
            return TAMANIO;
        }

        void Aniade(char nuevo){
            if (total_utilizados < TAMANIO){
                 vector_privado[total_utilizados] = nuevo; total_utilizados++;
            }
        }

        char Elemento(int indice){
             return vector_privado[indice];
        }

        //Ejercicio 2. Metodo para modificar
        void Modifica(int indice_componente, char nuevo){
            if(indice_componente < total_utilizados)
            vector_privado[indice_componente]=nuevo;
        }

        //Ejercicio 3 intercambiar dos componentes
        void IntercambiaComponentes(int indice_com1, int indice_com2){
            char auxiliar;

            if(indice_com1 < total_utilizados && indice_com2 < total_utilizados){
                auxiliar=vector_privado[indice_com1];
                vector_privado[indice_com1]=vector_privado[indice_com2];
                vector_privado[indice_com2]=auxiliar;
            }

            else
                cout<<"No podemos proceder con el intermcabio."<<endl;
        }

        void Invierte(char vector_privado[], int total_utilizados){
            for(int i=total_utilizados; i>0; i--)
                cout<<Elemento(i);
        }

};


int main()
{
    char caracter;
    int comp1, comp2;
    SecuenciaCaracteres a;


    for(int i=0; i<a.Capacidad(); i++){

        cout<<"\nIntroduce un caracter: ";
        cin>>caracter;
        a.Aniade(caracter);

    }

    //Intercambiar componentes.
    cout<<"Introduce las componentes que quiere intercambiar: ";
    cin>>comp1>>comp2;

    a.IntercambiaComponentes(comp1, comp2);

    //Imprimimos las componentes.
    for(int i=0; i<a.TotalUtilizados(); i++){
        cout<<a.Elemento(i)<< " ";
    }



    cout<<"\n\nEl total utilizado es: "<<a.TotalUtilizados()<<endl;
    cout<<"La capacidad es: "<<a.Capacidad()<<endl;

}
