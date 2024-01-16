/*
    #2. Se le pide que cree un programa donde este tenga un arreglo quemado o dado por el usuario,
    en el cual debe recorrerlo y encontrar el mayor numero del arreglo
*/
#include <iostream>

using namespace std;

int main(){

    int numero[5];
    int high=0;

    for(int i=0; i<5;i++){
        cout<<"Digite un numero: ";
        cin>>numero[i];
        cout<<endl;
    }

    for(int i=0; i<5; i++){
        if(numero[i] > high){
            high = numero[i];
        }
    }

    cout<<"El numero mayor del arreglo es: "<<high;


    return 0;
}