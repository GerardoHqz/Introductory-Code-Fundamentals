/* 
    3. Se desea realizar un programa para solicitar al usuario 3 notas de un estudiante,
    dadas estas 3 notas calcular el promedio y mostrarlo en pantalla
*/

#include <iostream>

using namespace std;

int main(){

    float nota = 0, suma = 0, promedio = 0, contador = 0;

    // while(contador < 3){
    //     contador++;
    //     cout<<"\nIngrese la nota ["<<contador<<"]: ";
    //     cin>>nota;
    //     suma += nota;
    //     //suma = suma + nota esta es la forma larga de la linea 18
    // }

    for(int i = 0; i < 3; i++){
        cout<<"\nIngrese la nota ["<<i+1<<"]: ";
        cin>>nota;
        suma += nota;
    }

    promedio = suma / 3;

    cout<<"\nEl promedio es: "<<promedio;


    return 0;
}