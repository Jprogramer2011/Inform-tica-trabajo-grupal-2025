#include <iostream>
int num;
using namespace std;
int main()
{
    cout<<"Ingrese un número para verificar si es par o impar"<<endl;
    cin>>num;
    if (num%2==0){
        cout<<"El número "<<num<<" es par"<<endl;
    } else {
        cout<<"El número "<<num<<" es impar"<<endl;
    }
    return 0;
}