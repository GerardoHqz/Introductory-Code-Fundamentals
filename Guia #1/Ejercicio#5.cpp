/* 
    5. Realizar un programa que dado un numero generado aleatoriamente o como dato 
    quemado, el usuario deba adivinarlo, por cada intento fallido decirle al usuario
    si el numero que introdujo es menor o mayor
*/

//Dato quemado = un dato dado o establecido por el programador

#include <iostream>
//Libraria para randomizar un numero
#include <time.h>
using namespace std;

int main(){

    //Asi es un dato quemado
    int num = 0, numWin = 8;
    bool band = true;

    //Randomizando un numero
    srand(time(NULL));
    //El ultimo parentisis defino cual sera el rango del numero aleatorio
    numWin = 1 + rand() % (11-1);

    cout<<"\nADIVINA...ADIVINA... EL NUMERO\n";

    do{
        cout<<"\nDigita un numero: ";
        cin>>num;

        if(num == numWin){
            cout<<"Felicidades has adivinado el numero!!!\n";
            band = false;
        }
        else if(num < numWin){
            cout<<"Uy Incorrecto, el numero es mayor\n";
        }
        else{
            cout<<"Error, el numero es menor\n";
        }

    }while(band);


    return 0;
}