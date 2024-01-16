/*
    #1 . Cree una funcion la cual solicita dos numeros al usuario y en una funcion
    realize una suma
*/
#include <iostream>

using namespace std;

//Protipo de la funcion
int Sum(int,int);

int main()
{
    int num1,num2;
    cout<<"Digite el numero 1: ";
    cin>>num1;
    cout<<"Digite el numero 2: ";
    cin>>num2;

    cout<<"\nEl resultado es: "<<Sum(num1,num2);

    return 0;

}

int Sum(int x, int y){
    int resultado = 0;
    resultado = x + y;
    return resultado;
}