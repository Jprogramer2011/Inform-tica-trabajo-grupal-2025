#include <iostream>
using namespace std;
int main()
{
    int n, i, r;
    r=0;
    cout<<"Ingrese un número entero positivo para mostar la suma desde el 1 hasta ese número"<<endl;
    cin>>n;
    if (n<1) {
        cout<<"Ingrese un número que sea igual o mayor a 1 para realizar la suma"<<endl;
    } else {
        for (i=1; i<=n; i++) {
            r=r+i;
        }
        cout<<"La suma de todos los números naturales del 1 hasta el "<<n<<" es: "<<r<<endl;
    }
    return 0;
}