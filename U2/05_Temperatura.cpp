/*
Unidad 2
Author: Andrea Sofia Orozco Morán 
Fecha: 03/10/22
*/

#include <iostream>

using namespace std; 
int main(){

    int contador = 0;
    float temperatura;
    float AcumTemp=0;
    float promedio;   
    float baja, alta;

    do{
        cout << "Dame la temperatura: ";
        cin >> temperatura;

        AcumTemp += temperatura;
        promedio = AcumTemp / 6;

        if(temperatura > alta){
            alta = temperatura;
        }
        if(temperatura < alta){
            baja = temperatura;
        }

        contador ++;
    }while(contador <= 6);
    
    cout << "El promedio de temperatura es: " << promedio;
    cout << "\nLa temperatura minima es: " << baja;
    cout << "\nLa temperatura maxima es: " << alta;
    cout << endl; 
    return 0;
}