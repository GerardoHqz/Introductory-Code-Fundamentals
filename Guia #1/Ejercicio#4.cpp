/* 
    4. Realizar un programa que pida al usuario numeros para realizar una suma, 
    al mostrar la suma en pantalla como resultado debera preguntar al usuario 
    si desea continuar 
*/

#include <iostream>

using namespace std;

int main(){

    int num1 = 0, num2 = 0, sum = 0;
    char option;
    bool band = true;

    // while(band){
    //     cout<<"\nIngrese un numero: ";
    //     cin>>num1;
    //     cout<<"Ingrese un numero: ";
    //     cin>>num2;
    //     sum = num1 + num2;

    //     cout<<"\nEl resultado de la suma es: "<<sum;

    //     cout<<"\n\nDesea continuar (S/N): ";
    //     cin>> option;

    //     //Si tienen un if y luego dentro de el solo hay 1 linea de codigo las llaves no son necesarias
    //     if((option == 'n') || (option == 'N'))
    //         band = false;
        
    // }

    do{
        cout<<"\nIngrese un numero: ";
        cin>>num1;
        cout<<"Ingrese un numero: ";
        cin>>num2;
        sum = num1 + num2;

        cout<<"\nEl resultado de la suma es: "<<sum;

        cout<<"\n\nDesea continuar (S/N): ";
        cin>> option;

        //Si tienen un if y luego dentro de el solo hay 1 linea de codigo las llaves no son necesarias
        if((option == 'n') || (option == 'N'))
            band = false;
    }while(band);


    return 0;
}