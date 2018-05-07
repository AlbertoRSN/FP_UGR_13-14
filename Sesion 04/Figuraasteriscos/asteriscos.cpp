#include <iostream>

using namespace std;

int main()
{
   int i, j;

   for (i=1; i<11; i++){
    cout<<i<<" "<<endl;
    for (j=10-i; j>0; j--)
            cout<< "*"<<endl;
   }
   cout<<endl;
}
