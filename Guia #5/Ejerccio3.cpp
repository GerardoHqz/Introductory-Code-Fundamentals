/*
    #3.Cree una funcion donde pueda calcular el maximo comun divisor
*/
#include <iostream>

using namespace std;

void mcd(int, int);

int main(){

    int num1, num2;
    cout<<"OBTNER EL MCD DE DOS NUMEROS\n\n";
    cout<<"Digite el numero 1: "; 
    cin>>num1;
    cout<<"Digite el numero 2: "; 
    cin>>num2;

    mcd(num1,num2);

    return 0;
}

void mcd(int a, int b){
    int aux, residuo = 0;

    while(a%b != 0){
        residuo = a%b;
        a = b;
        b = residuo;
    }

    cout<<"El MCD es: "<<b;
}