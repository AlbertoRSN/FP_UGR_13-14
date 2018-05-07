/* ****************************************************************************************************
********************************DNI: 48950011-P********************************************************
************************** Alberto Rodriguez Santana **************************************************
*********************************** Grupo D1 **********************************************************
_______________________________________________________________________________________________________

21. Calcular mediante un programa en C++ el combinatorio n m con n, m valores enteros.
 No pueden usarse las funciones de la biblioteca cmath. El combinatorio de n sobre m (con n ≥ m) es un
 número entero que se deﬁne como sigue:

            factn/(factm*factnm)
_______________________________________________________________________________________________________
*/

#include <iostream>

using namespace std;

int main()
{
    int n,m,resultado=0, factn=1, factm=1, factnm=1;

	cout<<"Introduce n: ";
	cin>>n;

	cout<<"Introduce m: ";
	cin>>m;


	if (n>=m)
	{
	    //Calculo factorial n
            for(int i=2; i<=n; i++)
                factn = factn * i;

	    //Calculo factorial m
            for(int i=2; i<=m; i++)
                factm = factm * i;

	    //Calculo factorial n-m

            for(int i=2; i<=n-m; i++)
                factnm = factnm * i;



        resultado=factn/(factm*factnm);

		cout<<"El resultado del combinatorio con \n n: "<<n<<"\n m: "<<m<<"\n\nes: "<<resultado;

	}
	else
		cout<<"El numero n debe ser mayor que m\n";


}
