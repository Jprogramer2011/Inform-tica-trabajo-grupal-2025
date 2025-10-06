/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
std::string op;
double num1, num2, r;

int main()
{
    std::cout<<"Escriba la operación (suma, resta, multiplicacion, division)"<<std::endl;
    std::cin>>op;
    if (op!="suma" and op!="resta" and op!="multiplicacion" and op!="division") {
        std::cout<<"Opcion invalida"<<std::endl;
        return 1;
    }
    std::cout<<"Escriba el primer número"<<std::endl;
    std::cin>>num1;
    std::cout<<"Escriba el segundo número"<<std::endl;
    std::cin>>num2;
    if (op=="suma") {
        r=num1+num2;
        std::cout<<"El resultado de la suma es: "<< r << std::endl;}
    else if(op=="resta"){
        r=num1-num2;
        std::cout<<"El resultado de la resta es: "<< r << std::endl;
    }
    else if(op=="multiplicacion"){
        r=num1*num2;
        std::cout<<"El resultado de la multiplicacion es: "<< r << std::endl;
    }    
    else{
        r=num1/num2;
        std::cout<<"El resultado de la division es: "<< r << std::endl;
    }    
    return 0;
}