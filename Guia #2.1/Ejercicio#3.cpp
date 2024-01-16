/*
    3. Hacer un programa en el cual el usuario introduzca una serie de caracteres en una arreglo, luego
	el usuario debe escribir una caracter y el programa le devolvera en que posicion se encuentra
	si no es encontrada la caracter notificarlo al usuario
*/
#include <iostream>

using namespace std;

int main(){

    char array[5], date;
    bool band = false;
    int position;

    for(int i = 0; i<5;i++){
        cout<<"Ingrese un caracter ["<<i+1<<"] : ";
        cin>>array[i];
    }

    cout<<"\nIngrese el caracter que dsea buscar: ";
    cin>>date;

    for(int i = 0; i < 5 ; i++){
        if(array[i] == date){
            band = true;
            position = i +1;
            i = 6;
        }
    }

    if(band){
        cout<<"\nEl caracter "<<date<<" fue encontrado en la posicion "<<position<<endl;
    }
    else{
        cout<<"\nEl caracter no se ha encontrado";
    }




    return 0;
}