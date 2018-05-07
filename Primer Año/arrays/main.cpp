/*#include <iostream>

using namespace std;

int main(){

    int i;

    char array_caracteres[] = {'a','b','c','d','e','f'};

    for(i=0; i<6; i++){

        cout<<" "<<array_caracteres[i]<<" ";
    }
}
*/
/*#include <iostream>

using namespace std;

int main(){

    int array_enteros[3];


    array_enteros[0]=45;
    array_enteros[1]=34;
    array_enteros[2]=93;

    cout<<array_enteros[0]<<endl;
    cout<<array_enteros[1]<<endl;
    cout<<array_enteros[2]<<endl;


}
*/

/*#include <iostream>
//NO ME FUNCIONA
using namespace std;

int main(){

fecha_agenda[3]={fecha('3', 'febrero', '1997'), fecha('5', 'mayo', '1994'), fecha(19, 'enero', 1987)};

    cout<<fecha_agenda[1];
    cout<<fecha_agenda[2];
    cout<<fecha_agenda[3];

}
*/


/*#include <iostream>

using namespace std;

int main(){

    int i, j;

        for(j=1; j<7; j++){
            cout<<"*";

            for(i=j; i<5; j++)
                cout<<"-";
        }

}
*/

#include <iostream>

using namespace std;

void incrementa(int a){
a=a+1;
}

int main(){
int var=1;
cout<<"valor de var antes: "<<var<<endl;
incrementa(3);
cout<<"valor de var ahora: "<<var<<endl;

}
