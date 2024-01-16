/*
    #3. Una pequeña tienda lo contacta, le pide que realize un pequeño programa donde el encargado de la tienda pueda ingresar el nombre
    del producto, el precio del producto y la cantidad; dado estos 3 datos el programa debe calcular la cantidad a total de pagar del cliente
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string name;
    float price, many, result;

    cout<<"SISTEMA DE FACTURACION\n\n";
    cout<<"Digite el nombre del producto: ";
    getline(cin, name);
    cout<<"Digite el precio del producto: ";
    cin>>price;
    cout<<"Digite la cantidad del producto: ";
    cin>>many;

    result = price * many;

    cout<<"\n\tFACTURA\n\n";
    cout<<"Nombre del producto: "<<name;
    cout<<"\nCantidad: "<<many;
    cout<<"\nTotal: "<<result<<endl<<endl;

    system("pause");

    return 0;
}