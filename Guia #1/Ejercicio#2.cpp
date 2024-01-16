/*
    2. Se pide que haga un programa donde el usuario ingrese desde consola un numero,
    el programa debe devolver como resultado si el numero ingresado es par o impar
*/

#include <iostream>

using namespace std;

int main(){

    int num1 = 0;

    cout<<"Digite un numero: "; 
    cin >> num1;
    
    if(num1 % 2 == 0){
        cout<<"\nEl numero "<<num1<<" es par";
    }
    else{
        cout<<"\nEl numero "<<num1<<" es impar";
    }


    return 0;
}