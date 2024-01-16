/*
	#1. Se solicita realizar un ejercicio donde dada una fecha ingresada nos devuelva la fecha del dia
	siguiente, haciendo uso de sus respectivas validaciones y con funciones.
*/

#include <iostream>

using namespace std;

//prototipo
void date(int,int,int);

int main(){

    int dia,mes,anio;
    cout<<"Digite el dia: "; cin>>dia;
    cout<<"Digite el mes: "; cin>>mes;
    cout<<"Digite el anio: "; cin>>anio;
    dia++;

    date(dia,mes,anio);


    return 0;
}

void date (int dia, int mes, int anio){
    bool band = false;

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia < 31){
            band = true;
        }
    }

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia == 31){
            dia = 1;
            mes++;
            band = true;
        }
    }

    if(mes == 1 || mes == 3 ||mes == 5 || mes == 7 ||mes == 8 || mes == 9 ||mes == 10 || mes == 12){
        if(dia < 32){
            band = true;
        }
    }

    if(mes == 1 || mes == 3 ||mes == 5 || mes == 7 ||mes == 8 || mes == 9 ||mes == 10){
        if(dia == 32){
            dia = 1;
            mes++;
            band = true;
        }
    }

    if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0){
        if(mes == 2){
            if(dia <= 30){
                dia = 1;
                mes++;
                band = true;
            }
        }
    }

    if(anio%4 != 0){
        if(mes == 2){
            if(dia <= 29){
                dia = 1;
                mes++;
                band = true;
            }
        }
    }

    if(dia == 32 && mes == 12){
        anio++;
        mes = 1;
        dia = 1;
        band =true;
    }

    if(dia > 32 || dia < 1){
        band = false;
    }

    if(band){
        cout<<"Nueva fecha "<<dia<<"/"<<mes<<"/"<<anio;
    }
    else{
        cout<<"La fecha ingresada es erronea";
    }


}