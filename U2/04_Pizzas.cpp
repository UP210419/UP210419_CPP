/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 28/09/22
Descripción: Muestra uso del if 

*/

#include <iostream>

using namespace std;
int main(){

    char pizza;
    char ingredientev;
    char ingredienten;

    cout << "Pizza vegetariana o no vegetariana \n";
    cin >> pizza;
    if((pizza == 'v') || (pizza == 'V')){
        cout << "MENU VEGETARIANO \n"; 
        cout << "1. Pimiento \n";
        cout << "2. Tofu \n";

        cout << "\nEliga sus ingredientes \n";
        cin >> ingredientev; 
        if(ingredientev = 1){
            cout << "Pizza con pimiento";
        }else if(ingredientev = 2){
            cout << "Pizza con tofu";
        }

    }else if((pizza == 'n') || (pizza == 'N')){
        cout << "MENU NO VEGETARIANO\n";
        cout << "1. Peperoni\n";
        cout << "2. Jamon\n";
        cout << "3. Salmon";

        cout << "\nEliga sus ingredientes\n";
        cin >> ingredienten; 
        if(ingredienten = 1){
            cout << "Pizza con peperoni";
        }else if(ingredienten = 2){
             cout << "Pizza con jamon";
        }else if(ingredienten = 3){
            cout << "Pizza con salmon";
        }
    }
    cout << "\nSu pedido es: \n"; 
    cout << endl;
    return 0;
}