#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Escriba un número para mostrar su tabla de multiplicar (1-10)"<<endl;
    cin>>n;
    for (i=1; i<=10; i++) {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}