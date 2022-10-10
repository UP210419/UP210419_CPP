/*
Unidad 2
Author: Andrea Sofia Orozco Morán 
Fecha: 05/09/22
Descripción: Uso de ciclo Do-While
*/

#include <iostream>

using namespace std; 
int main(){

    int contador;
    int cant; 
    int precio; 
    int total; 

    cout << "Cantidad de productos que vas a comprar: ";
    cin >> cant; 
    cout << "Precio de producto: ";
    cin >> precio;
    do{
        contador = cant * precio; 
        total = total + (cant * precio);
        contador ++;
    }while(contador <= 0);
    cout << "factura: " << total;
    return 0;
}