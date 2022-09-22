/*
Unidad 1. Tipos de datos 
Authhor: Andrea Sofia Orozco Morán 
Descripción: Muestra los diferentes tipos de datos en c++
*/

//Librería para manejo de entradas y salida de pantalla 
#include <iostream>
//Librería para el uso de printf y scanf 
#include <stdio.h>

//Uso del namespace para evita el std::
using namespace std;

//Función principal de tipo entero 
int main(){

    //Más información en:
    //https://www.geeksforgeeks.org/c-data-types/
    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.565465654654;
    char caracter = 64;

    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "El numero flotante es: " << flotante << endl;
    cout << "El tamaño del flotante es: " << sizeof(flotante) << "bytes" << endl;
    cout << "El numero double es: " << grande << endl;
    cout << "El tamaño del double es: " << sizeof(grande) << "bytes" << endl;
    cout << "El caracter char es: " << caracter << endl;
    cout << "El tamaño del char es: " <<sizeof(caracter) << "bytes" <<endl;

    cout << "=================" << endl;

    //Más información en:
    //https://cplusplus.com/reference/cstdio/printf
    printf("Usando la función printf\n");
    printf("El número entero : %i \n", entero);
    printf("El número flotante es: %3.1f \n", flotante); 

    cout <<std::endl;
    
    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}