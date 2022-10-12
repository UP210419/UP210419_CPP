/*
Unidad 2
Author: Andrea Sofia Orozco Morán 
Fecha: 05/09/22
Descripción: Uso de ciclo Do-While
*/

#include <iostream>

using namespace std; 
int main(){

    int cant = 0; 
    int precio; 
    int total; 

    do{
        cout << "Cantidad de productos que vas a comprar: ";
        cin >> cant;
        if(cant != 0){
            cout << "Precio de producto: ";
        cin >> precio;

        total += precio*cant;
        }     

    }while(cant != 0);
    cout << "factura: " << total;
    return 0;
}