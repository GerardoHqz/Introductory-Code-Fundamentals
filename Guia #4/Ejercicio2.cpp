/*
    #2. En base a la formula general para la solución de ecuaciones cuadraticas, realizar un programa que con dicha formula
    pueda resolver ecuaciones cuadraticas solicitando los datos necesarios e imprimiendo en pantalla el resultado final
*/
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float a,b,c,x1,x2;
    cout<<"\tPrograma de la Formula Cuadrática \n\n";
    cout<<"Digite el valor de A: ";
    cin>>a;
    cout<<"Digite el valor de B: ";
    cin>>b;
    cout<<"Digite el valor de C: ";
    cin>>c;

    x1 = (-b + (sqrt (b*b) - (4*a*c))) / (2*a);
    x2 = (-b - (sqrt (b*b) - (4*a*c))) / (2*a);

    cout<<"El resultado de X+ = "<<x1<<" y el resultado de X- = "<<x2;


    return 0;
}