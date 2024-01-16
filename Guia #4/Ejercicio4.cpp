/*
    #4. Cree un programa el cual permita hacer las opreaciones basicas de una calculadora (sumar, restar,
    multiplicar, dividir), el programa debe permitir el usuario elegir que opcion desea ejecutar y este no
    debe finalizar hasta que el usuario asi lo decida
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int option, num1, num2, resultado;
    bool band = true;

    do{
        system("cls");
        cout<<"\n*****MENU CALCULADORA*****\n";
        cout<<"\n1. Sumar";
        cout<<"\n2. Restar";
        cout<<"\n3. Multiplciar";
        cout<<"\n4. Dividir";
        cout<<"\n5. Salir";
        cout<<"\n\n Elija una opcion: "; cin>>option;

        switch (option)
        {
        case 1:
            cout<<"ingrese un numero: "; cin>>num1;
            cout<<"ingrese un numero: "; cin>>num2;
            resultado = num1 + num2;
            cout<<"\nEl resultado es: "<<resultado<<endl;
            system("pause");
            break;
        case 2:
            cout<<"ingrese un numero: "; cin>>num1;
            cout<<"ingrese un numero: "; cin>>num2;
            resultado = num1 - num2;
            cout<<"\nEl resultado es: "<<resultado<<endl;
            system("pause");
            break;
        case 3:
            cout<<"ingrese un numero: "; cin>>num1;
            cout<<"ingrese un numero: "; cin>>num2;
            resultado = num1 * num2;
            cout<<"\nEl resultado es: "<<resultado;
            system("pause");
            break;
        case 4:
            cout<<"ingrese un numero: "; cin>>num1;
            cout<<"ingrese un numero: "; cin>>num2;
            resultado = num1 / num2;
            cout<<"\nEl resultado es: "<<resultado;
            system("pause");
            break;
        case 5:
            band = false;
            break;
        default:
            cout<<"\nopcion no valida\n";
            system("pause");
            break;
        }
    }while(band);


    return 0;
}