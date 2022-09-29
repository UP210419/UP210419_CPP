/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 28/09/22
Descripción: Muestra el uso del if 

*/

#include <iostream>
using namespace std; 

int main(){

    char respuesta; 

    cout << "Eliga su pizza ";
    cin >> respuesta; 
    
    if(respuesta == 'v'){
        cout << "Pizza vegetariana";
    }else {
        cout << "Pizza no vegetariana";
    }
    cout << endl;
    return 0;
}