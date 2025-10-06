#include <iostream>
using namespace std;
int main()
{
    double n, i;
    int neg, c, pos;
    neg=0;
    c=0;
    pos=0;
    for (i=1; i<=10; i++){
        cout<<"Ingrese un número"<<endl;
        cin>>n;
        if (n<0){
            cout << "El número "<<n<<" es negativo"<<endl;
            neg=neg+1;
        } else if (n==0){
            cout << "El número ingresado es cero"<<endl;
            c=c+1;
        } else if (n>0){
            cout << "El número "<<n<<" es positivo"<<endl;
            pos=pos+1;
        }
    }
    cout << "Usted ha ingresado"<<endl;
    cout <<neg<<" números negativos"<<endl;
    cout <<c<< " ceros"<<endl;
    cout <<pos<< " números positivos"<<endl;
    return 0;
}