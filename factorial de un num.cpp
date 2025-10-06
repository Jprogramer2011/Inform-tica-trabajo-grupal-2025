#include <iostream>
int n, i, r;
using namespace std;
int main()
{
    r=1;
    cout<<"Ingrese un número para calcular su factorial"<<endl;
    cin>>n;
    for (i=1; i<=n; i++){
        r=r*i;
    }
    cout<<"El factorial del número ingresado es "<<r<<endl;
    return 0;
}