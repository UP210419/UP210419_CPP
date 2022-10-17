/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 26/09/22
Descripción: Muestra uso de if - else
En una determinada empresa, sus empleados son evaluados 
al final de cada año
*/

//Este prograna indica el nivel de rendimiento de cada empleado en una empresa, y la cantidad de dinero que recibirá

#include <iostream>

using namespace std; 
int main(){

    float puntuacion; 
    float inaceptable = 0.0;
    float aceptable = 0.4;
    float meritorio = 0.6;
    float ganancia; 

    cout << "Su puntuacion es de: \n";
    cin >> puntuacion; 

    if(puntuacion == inaceptable){
        cout << "Tu nivel de rendimiento es inaceptable \n";
        ganancia = inaceptable * 2400;
        cout << "Tu ganancia es de: \n$" << ganancia; 
    }else if(puntuacion == aceptable){
        cout << "Tu nivel de rendimiento es aceptable \n"; 
        ganancia = aceptable * 2400;
        cout << "Tu ganancia es de: \n$" << ganancia; 
    }else if(puntuacion >= meritorio){
        cout << "Tu nivel de rendimiento es meritorio \n";
        ganancia = meritorio * 2400;
        cout << "Tu ganancia es de: \n$" << ganancia; 
    }else{
        cout << "Tu nivel de rendimiento es insuficiente \n";
        cout << "No hay ninguna ganancia";
    }
    cout << endl;
    return 0;
}