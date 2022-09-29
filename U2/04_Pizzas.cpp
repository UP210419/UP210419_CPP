/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 28/09/22
Descripción: Muestra uso del if 

*/

#include <iostream>

using namespace std;
int main(){

    char resp;

    cout << "Eliga su piza v/nv";
    cin >> resp;
    if(resp == 'v'){
        cout << "MENÚ VEGETARIANO \n
                1. Pimiento \n
                2. Tofu";
    }else if(resp == 'nv'){
        cout << "MENÚ NO VEGETARIANO \n
                1. Peperoni \n
                2. Jamón \n
                3. Salmón";
    }
    return 0;
}