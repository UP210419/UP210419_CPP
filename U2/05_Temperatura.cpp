/*
Unidad 2. Uso de ciclo Do While 
Author: Andrea Sofia Orozco Morán 
Fecha: 03/10/22
Descripción: Muestra el uso de la sentencia Do While 
*/

#include <iostream>

using namespace std; 
int main(){

    int contador = 1;
    float temperatura;
    float AcumTemp=0;
    float promedio;   
    float baja = -30, alta = 40;

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