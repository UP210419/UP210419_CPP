/*
Unidad 1. Entrada de datos 
Author: Andrea Sofia Orozco Morán 
Fecha: 21/09/22
DEscripción: Muestra la forma de ingresar tipos de datos por el usuario 
*/

//Librería de manejo de entradas y salida de pantalla 
#include <iostream>
//Librería para el uso de printf y scanf 
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero 
int main(){
    //Más información en:
    //https://wwwgeeksforgeeks.org/c-data-types/
    int entero;
    int flotante;
    int grande;
    int caracter;

    cout << "Este programa muestra el ingreso de datos por el usuario. \n";
    cout << "Ingresa un dato de tipo entero: ";
    cin >> entero;
    cout << "El dato ingresado es: " << entero << endl;

    cout << "==========" << endl;

    //Más información en:
    //https://cplusplus.com/reference/cstdio/printf/
    printf("Usando la función printf y scanf \n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("El dato ingresado es: %i \n", entero);

    cout <<std::endl;

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}