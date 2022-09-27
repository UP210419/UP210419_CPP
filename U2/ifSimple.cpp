/*
Unidad 2. Uso de if 
Author: Andrea Sofia Orozco Morán 
Fecha: 21/09/22
DEscripción: Muestra el uso de if simple 
*/

//Libreria para manejo de entradas y salidas de pantalla 
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Funcion principal de tipo entero 
int main(){
    int numero;
    int dato = 1; // = : Asigna valor 

    cout << "Ingresa un numero entero";
    cin >> numero;
    if(numero == dato){ // == : Comparación 
        cout << "El numero es igual a dato" <<endl; 
    }

    //Ejercicio: utilice las diferentes comparaciones ==, !=, <, >

    return 0;
}