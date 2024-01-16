/*
	#2. Realizar un programa con funciones el cual imprima en pantalla todos los numeros
	impares de los primeros 200 numeros enteros.
*/
#include <iostream>

using namespace std;

void Impares(int*);
void Resultado(int*);

//variable global

int main() {

    //creando vector
    int vector[200];

    //llamando funcion
    Impares(vector);
    Resultado(vector);

    return 0;
}

//Funcion imapres
void Impares(int* vector) {

    //variable local
    int i = 0;

    //ciclo for
    for (i = 0; i < 200; i++) {

        //condicion
        if (i % 2 != 0) {

            //asignando valor
            vector[i] = i;
        }
    }
}

//funcion resultados
void Resultado(int* vector) {

    //variable local
    int i = 0;

    //ciclo for
    for (i = 0; i < 200; i++) {
        cout << vector[i] << endl;
    }
}



