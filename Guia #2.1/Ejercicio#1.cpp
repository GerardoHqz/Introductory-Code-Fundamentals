/*
    #1. Realizar un programa que cuente con un arreglo que almacene 5 numeros quemados,
	luego mostrar el arreglo multiplicado por dos cada numero del arreglo.
*/
#include <iostream>

using namespace std;

int main(){

    //Declaracion de array
    int numeros [5] = {1,2,3,4,5};
    int array2 [5] ;

    for(int i = 0; i < 5; i++){
        numeros[i] *= 2;
        cout<<numeros[i]<<", "; 
    }


    return 0;
}