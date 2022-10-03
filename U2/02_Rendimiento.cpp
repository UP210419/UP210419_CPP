/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 26/09/22
Descripción: Muestra uso de if - else
En una determinada empresa, sus empleados son 
evaluados al final de cada año. 
*/

//Este prograna indica el nivel de rendimiento de cada empleado en una empresa, y la cantidad de dinero que recibirá

//Librería para manejo de entradas y salida de pantalla 
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std; 

//Función principal de tipo entero 
int main(){

    float puntuacion; 
    float inaceptable = inaceptable;
    float aceptable = aceptable;
    float meritorio = meritorio;
    float ganancia; 

    //Solicita puntuación del empleado
    cout << "Su puntuacion es: \n";
    cin >> puntuacion; 
    if(puntuacion == inaceptable){
        cout << "\nTu nivel de rendimiento es inaceptable";
        ganancia = inaceptable * 2400;
        cout << "\n\nTu ganancia es de: \n$" << ganancia; 
    }else if(puntuacion == aceptable){
        cout << "\nTu nivel de rendimiento es aceptable"; 
        ganancia = aceptable * 2400;
        cout << "\n\nTu ganancia es de: \n$" << ganancia; 
    }else if(puntuacion >= meritorio){
        cout << "\nTu nivel de rendimiento es meritorio";
        ganancia = meritorio * 2400;
        cout << "\n\nTu ganancia es de: \n$" << ganancia; 
    }else{
        cout << "\nTu nivel de rendimiento no es aceptable \n";
    }
    cout << endl;
    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}