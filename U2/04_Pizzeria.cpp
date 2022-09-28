/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 28/09/22
Descripción: Muestra uso del if 
La pizzeria Bella Napoli ofrece pizzas vegetarianas y 
no vegetarianas a sus clientes.
*/

//Libreria para manejo de entrada y salidas de pantalla 
#include <iostream>

//Uso de namespace para evitar el std::
using namespace std; 

//Función principal de tipo entero 
int main(){

    char pizza;

    while (pizza == 'v')
    {
      cout << "Eliga su pizz v/nv \n";
      cin >> pizza; 
    }
    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}