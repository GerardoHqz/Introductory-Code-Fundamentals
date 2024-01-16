/*
    #4. Se le pide que reliace un programa donde deterine si el año
    ingresado por el usuario es un año bisiesto o no
*/
#include <iostream>

using namespace std;

bool bisiesto(int);

int main(){

    int anio;
    cout<<"Digite el año: ";
    cin>>anio;

    if(bisiesto(anio) == true){
        cout<<"\nSi es un año bisiesto";
    }
    else{
        cout<<"\nNo es un año bisiesto";
    }

    return 0;
}

bool bisiesto(int anio){
    bool band = false;

    if(anio%4 == 0 && anio%100 == 0 || anio%400 == 0){
        band = true;
    }
    else{
        band = false;
    }

    return band;
}