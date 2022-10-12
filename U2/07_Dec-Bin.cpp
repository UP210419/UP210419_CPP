/*
Unidad 2. 
Author: Andrea Sofia Orozco Morán 
Fecha: 07/10/22
Descripción: Muestra el uso de ciclo while  

*/

#include <iostream>

using namespace std; 

int main(){

    int num; 
    int bin; 

    cout << "Introduce un numero ";
    cin >> num; 

    while(num != 0){
        if(num%2 == 0){
            bin = '0' + bin;
        }else{
            bin = '1' + bin; 
        }
        num /= 2;  
    }
    cout << "Numero binario: " << bin;
    cout << endl; 
    return 0; 
}