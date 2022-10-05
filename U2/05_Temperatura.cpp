/*
Unidad 2
Author: Andrea Sofia Orozco Morán 
Fecha: 03/09/22
*/

#include <iostream>

using namespace std; 
int main(){

    int contador;
    float temperatura;
    float AcumTemp=0;
    float promedio;    
    do{
        cout << "Give me the temperature:";
        cin >> temperatura;
        AcumTemp += temperatura;
        contador ++;
    }while(contador <= 6);

    return 0;
}