/*
Unidad 3
Author: Andrea Sofia Orozco Morán 
Fecha: 24/10/22
Descripción: Funciones 
*/

#include <iostream>

using namespace std;

void obtenerCambio(int); //cambio - monto
void obtenerMonedad(int);
void imprimirCambio(string);

//variables globales 
int quinientos = 0, doscientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;

int main(){

    int dinero;
    int resi; 

    cout << "Dame la cantidad de dinero: ";
    cin >> dinero;

    quinientos = dinero/500;
    resi = dinero%500;
    doscientos = resi/200;
    resi = resi%200;
    cien = resi/100;
    resi = resi%100;
    cincuenta = resi/50;
    resi = resi%50;
    veinte = resi/20;
    resi = resi%20;
    diez = resi/10;
    resi = resi%10;
    cinco = resi/5;
    resi = resi%5;
    dos = resi/2;
    resi = resi%2;
    uno = resi/1;
    resi = resi%1;

    obtenerCambio(dinero);
    imprimirCambio("Total");

    obtenerCambio(dinero);
    imprimirCambio("Monedas");

    return 0;
}

void obtenerCambio(int dinero);
void obtenerMonedas(int dinero);
void imprimirCambio(string);