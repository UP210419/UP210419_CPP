/*
Unidad 2
Author: Andrea Sofia Orozco Morán 
Fecha: 05/09/22
Descripción: Uso de ciclo Do-While
*/

#include <iostream>

using namespace std; 
int main(){

    int contador = 0;
    int cant; 
    int precio; 
    int total; 
    int pago;

    do{
        cout << "Cantidad de productos que vas a comprar: ";
        cin >> cant; 
        cout << "Precio de producto: ";
        cin >> precio;
            
        pago = cant * precio;
        total = total + pago;       

    }while(cant != 0);
    cout << "factura: " << total;
    return 0;
}