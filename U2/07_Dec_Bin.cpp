/*
Unidad 2. Uso de ciclo While 
Author: Andrea Sofia Orozco Morán 
Fecha: 07/10/22
Descripción: Muestra el uso de la sentencia While  

*/

#include <iostream>

using namespace std; 

int main(){

    int num; 
    string bin = ""; 
    
    cout << "Introduce un numero cualquiera ";
    cin >> num; 

    while(num != 0){
        if(num%2 == 0){
            bin = "0" + bin;
        }else{
            bin = "1" + bin; 
        }
        num = num/2;  
    }
    cout << "Numero binario: " << bin;
    cout << endl; 
    return 0; 
}