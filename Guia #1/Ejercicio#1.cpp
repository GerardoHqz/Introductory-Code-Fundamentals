/*
    1. Se solicita hacer un programa de consola que permita ingresar tres numeros
    y como resultado el programa debe determinar cual de los dos numeros ingresados
    es el mayor
*/

// ctrl + k + ctrl c = Comentar un fragmento de codigo
// ctrl + k + ctrl + u = descomentar un fragmento de codigo

#include <iostream>

using namespace std;

int main(){

    int num1 = 0, num2 = 0, num3 = 0;

    //cout: imprimir en pantalla
    //enld: salto de linea     \n: salto linea
    cout<<"Programa de numero mayor"<<endl;
    cout<<"\nDigite el primer numero: ";
    //cin: para guardar datos
    cin>>num1;
    cout<<"\nDigite el segundo numero: ";
    cin>>num2;
    cout<<"\nDigite el tercer numero: ";
    cin>>num3;
    // num1 = 1 num2 = 0 num3= -1
    if((num1 > num2) && (num1 > num3)){
        cout<<"\n\nEl mayor numero es: "<<num1;
    }
    else if((num2 > num1) && (num2 > num3)){
        cout<<"\n\nEl mayor numero es: "<<num2;
    }
    else{
        cout<<"\n\nEl mayor numero es: "<<num3;
    }


    return 0;
}