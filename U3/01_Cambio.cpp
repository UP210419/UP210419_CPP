/*
Unidad 3
Author: Andrea Sofia Orozco Morán 
Fecha: 24/10/22
Descripción: Funciones 
*/

#include <iostream>

using namespace std;

void obtenerCambio(int); //cambio - monto
void imprimirCambio(string);

//variables globales 
int quinientos = 0, doscientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;

int main(){

    int dinero;

    cout << "Dame la cantidad de dinero: ";
    cin >> dinero;

    obtenerCambio(dinero);
    imprimirCambio("Total");

    obtenerCambio(dinero);
    imprimirCambio("Monedas");

    return 0;
}