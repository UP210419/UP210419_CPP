/*
Unidad 3
Author: Andrea Sofia Orozco Morán 
Fecha: 27/10/22
Descripción: 
*/

#include <iostream>

using namespace std; 

int denominaciones[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1}; 
int cantidadBilletes[9] = {0};
int monto; 
int residuo = 0;
string tipo;  

int main(){ 

    cout << "Dame la cantidad de dinero: ";
    cin >> monto;

    for(int denominacion = 0; denominacion < 9; denominacion++){
        residuo = (denominacion == 0)?monto:residuo;
        cantidadBilletes[denominacion] = residuo / denominaciones[denominacion];
        residuo = residuo % denominaciones[denominacion];
    }
    for(int posicion=0; posicion<9; posicion++){
    tipo = (posicion < 5)?"Billetes":"Monedas";
    cout << tipo << " de $" << denominaciones[posicion] << ": " << cantidadBilletes[posicion] << "\n"; 
    }
    cout << endl; 
    return 0;
}