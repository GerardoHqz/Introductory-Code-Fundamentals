/*
    #1. Realize un programa para calcular el area y pertimetro de un circulo, mostrar en consola los resultados
    obtenidos. Recuerde que la formula del area es: pi*r^2 y el perimetro se obtiene: 2*Pi*r
*/
#include <iostream>

using namespace std;

int main(){

    float radio = 0,area=0, perimetro = 0;

    cout<<"Prgrama para calcular area y perimetro de un circulo\n";
    cout<<"Digite el valor del radio de su area circular: "; 
    cin>>radio;

    area = 3.14 * (radio * radio);
    perimetro = (2 * 3.14) * radio;

    cout<<"El area circular es de: "<<area<<endl;
    cout<<"El perimetro circular es de: "<<perimetro<<endl;


    return 0;
}