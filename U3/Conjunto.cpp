/*
Unidad 3
Autor: Andrea Sofia Orozco Morán 
Fecha: 28/10/22
Descripción: Muestra ordenamiento de datos (Vectores)
Hacer un conjunto, una agrupación de elementos 
*/

#include <iostream>

using namespace std; 
int main(){

    int conjunto[5][5];

    for(int row = 0; row < 5; row++){
        for(int col = 0; col < 5; col++){
            cout << "Valor: ";
            cin >> conjunto[row][col];
        }
    }

    for(int row = 0; row < 5; row++){
        for(int col = 0; col < 5; col++){
            cout << conjunto[row][col] << " ";
        }
    }
    cout << endl; 
    return 0;
}