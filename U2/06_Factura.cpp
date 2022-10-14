/*
Unidad 2. Uso de ciclo Do While 
Author: Andrea Sofia Orozco Morán 
Fecha: 05/09/22
Descripción: Muestra el uso de la sentencia Do While
*/

#include <iostream>

using namespace std; 
int main(){

    int cant; 
    float precio; 
    float total; 

    do{  
        cout << "Cantidad de productos que desea comprar: ";
        cin >> cant; 

        if(cant != 0){
        cout << "Precio de producto a comprar: ";
        cin >> precio;
        
        total = total + precio * cant;   
        }

    }while(cant != 0);
    cout << "factura \n"; 
    cout << "---------------- \n";
    cout << "Pago total: $" << total;
    cout << endl;
    return 0;
}