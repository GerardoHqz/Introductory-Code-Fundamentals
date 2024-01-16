#include <iostream>

using namespace std;

int main(){
    int a,b,x=5,y=0,suma=0;
    int digito1, digito2,digito3,digito4;

    cout<<"Ingrese un número"<<endl;
    cin>>a;
    cout<<"Ingrese otro número"<<endl;
    cin>>b;

    for ( int i = a; i <= b; i++)
    {
        //Descomposicion de numeros en digitos
        if((a == 0 || a == 5)&&((b == 0 || b == 5))){

        }
        else if(a > 9 || b > 9){
            digito1 = a % 100 / 10;
            digito2 = a % 10 / 1;
            digito3 = a % 100 / 10;
            digito4 = a % 10 / 1;

            if(digito2 == 0 || digito2 == 5){
                
            }
        }
        
        if()

        // if(digito2 == 5 || digito2 == 0 ){
        //     suma += a;
        // }
        // else if(digito4 == 5 || digito4 == 0){
        //     suma += b;
        // }
        // else if(a == 0 || a == 5){
        //     suma += a;
        // }
        // else if(b == 0 || b == 5){
        //     suma += b;
        // }
        
    }   
    cout<<"la suma de todos los numeros multiplos de 5 entre "<<a<<" y "<<b<<" son "<<suma;


    return 0;
}