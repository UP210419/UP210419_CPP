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
    string bin = ""; 
    char r = 's'; 

    cout << "Introduce un numero cualquiera ";
    cin >> num; 

    while(r == 's'){
        while(num != 0){
            if(num%2 == 0){
                bin = "0" + bin;
            }else{
                bin = "1" + bin; 
            }
            num = num/2;  
        }
        cout << "Numero binario: " << bin;
        cout << "Dese ingresar otro numero ";
        cin >> r; 
    } 
    cout << endl; 
    return 0; 
}