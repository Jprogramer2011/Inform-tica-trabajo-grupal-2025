#include <iostream>
using namespace std;
bool Primo(int n) {
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for (int i=3; i*i<=n; i+=2) {
        if (n%i==0) return false;
    }
    return true;
}
int main() {
    int numero;
    cout<<"Ingrese un número: ";
    cin>>numero;
    if (Primo(numero))
        cout<<numero<< " es un número primo" <<endl;
    else
        cout<<numero<< " no es un número primo" <<endl;
    return 0;
}