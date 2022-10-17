/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 28/09/22
Descripción: Muestra el uso del if 
Una empresa tiene una sala de juegos para todas las edades. Si el cliente es menor de 4 años 
puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y si es mayor de 18 años, $10
*/

#include <iostream>

using namespace std; 
int main(){

    int edad;

    cout << "Indique su edad \n";
    cin >> edad; 

    
    if(edad < 4){
        cout << "Su entrada es gratis"; 
    }else if((edad >= 4) && (edad <= 18)){
        cout << "Debe pagar $5"; 
    }else if(edad > 18){
        cout << "Debe pagar $10"; 
    }
    cout << endl; 
    return 0;

    /*
    Ejercicio: Escribir un programa para una empresa que tiene salas de juegos para 
    todas las edades y quiere calcular de forma automática el precio que debe cobrar
    a sus clientes por entrar. 
    */
}