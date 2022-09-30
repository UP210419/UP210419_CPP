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
        cout << "MENÚ VEGETARIANO\n"; 
        cout << "pimiento\n";
        cout << "tofu";
    }else if(resp == 'nv'){
        cout << "MENÚ NO VEGETARIANO\n";
        cout << "Peperoni\n";
        cout << "Jamón\n";
        cout << "Salmón";
    }
    cout << endl;
    return 0;
}