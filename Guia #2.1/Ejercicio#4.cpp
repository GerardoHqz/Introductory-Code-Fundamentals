/*
    #4. Realizar un programa que imprima en pantalla una tabla 3x3 y nos devuelva la diagonal
    de dicha tabla
*/
#include <iostream>

using namespace std;

int main(){

    int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<"Mostrando la matriz: \n";

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<numeros[i][j];
        }
        cout<<endl;
    }

    cout<<"\nDiagonal: \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                cout<<numeros[i][j];
            }
        }
        cout<<endl;
    }


    return 0;
}