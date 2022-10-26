/*
Unidad 3
Author: Andrea Sofia Orozco Morán 
Fecha: 
Descripción: 

*/

//Vector - ordenamiento de datos en una sola fila 

#include <iostream>
#include <stdio.h>

using namespace std; 

void llenarVector(int v[], int tamaño){
    for(int elem = 0; elem < tamaño; elem++){
        cout << "Dame el valor " << elem << " ";
        cin >> elem; 
    }
}

int main(){

    //Declara vector:  tipo nombre[#]; =: asigna valor 
    int numeros[100] = {0};
    char c[6]; //= {'I', 'S', 'C', '0', '3', 'B'}

    /*
    for(int cont = 0; cont < 6; cont++){
        cout << "Dame el valor de " << cont << ": "; 
        cin >> c[cont];
    }
    */

    //Mandar a lamar funcion llenarVector()
    llenarVector(numeros, 6);
    cout << endl; 

    for(int cont = 0; cont < 6; cont++){
        cout << c[cont] << " ";
    }

    getchar();

    return 0; 
}