/*
    #1. Realizar un programa que cuente con un arreglo que almacene 5 numeros quemados,
	luego mostrar el arreglo multiplicado por dos cada numero del arreglo.
*/
#include <iostream>

using namespace std;

int main(){
    //Declarando el arreglo
    int numeros [5] = {1,2,3,4,5};
    int numero2 [5];

    for(int i=0;i<5;i++){
        numero2[i] = numeros[i] * 2;
        cout<<numero2[i]<<", ";
    }

    return 0;
}