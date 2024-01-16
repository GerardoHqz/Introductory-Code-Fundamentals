/*
    #2. Crea un programa donde se solicite el nombre del usuario y en una funcion
    debera mostrar un mensaje saludando al usuario con su nombre
*/
#include <iostream>

using namespace std;

void saludo(string);

int main(){

    string name;

    cout<<"Digita tu nombre: ";
    cin>>name;

    saludo(name);

    return 0;
}

void saludo(string name){
    cout<<"\n\nHola "<<name<<" mucho gusto en conocerte!";
}