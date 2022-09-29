/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 28/09/22
Descripción: Muestra el uso del if 
Una empresa tiene una sala de juegos para todas las edades. Si el cliente es menor de 4 años 
puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y si es mayor de 18 años, $10
*/

//Libreria para manejo de entradas y salidas de pantalla 
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std; 

//Función principal de tipo entero
int main(){

    int edad;

    //Se solicita edad del cliente 
    cout << "Indique su edad \n";
    cin >> edad; 

    //Se calcula el precio de entrada que debará pagarse 
    if(edad < 4){
        cout << "\nSu entrada es gratis"; //Se imprime resultado
    }else if((edad >= 4) && (edad <= 18)){
        cout << "\nDebe pagar $5"; //Se imprime resultado
    }else if(edad > 18){
        cout << "Debe pagar $10"; //Se imprime resultado
    }
    cout << endl; 
    //Al ser una función debe retornar un valor, en este caso 0
    return 0;

    /*
    Ejercicio: Escribir un programa para una empresa que tiene salas de juegos para 
    todas las edades y quiere calcular de forma automática el precio que debe cobrar
    a sus clientes por entrar. 
    */
}