#include <iostream>
using namespace std;
double n1,n2,n3;
int main()
{
    cout<<"Ingrese 3 números para verificar cuál es el mayor"<<endl;
    cin>>n1>>n2>>n3;
    if (n1>=n2 && n1>=n3) {
        cout<<"El número "<<n1<<" es el mayor";
    } else {
        if (n2>=n1 && n2>=n3) {
        cout<<"El número "<<n2<<" es el mayor";
    } else {
        if (n3>=n1 && n3>=n2) {
        cout<<"El número "<<n3<<" es el mayor";
    }
    }
    }
    return 0;
}