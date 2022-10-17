/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 28/09/22
Descripción: Muestra uso del if 
La pizzeria Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus 
clientes. Los ingredientes para cada tipo de pizza aparecen a continuación
*/

#include <iostream>

using namespace std;
int main(){

    int pizza;
    int ingrediente;

    cout << "     BELLA NAPOLI \n";
    cout << "1. Vegetariana \n";
    cout << "2. No vegetariana \n";
    cout << "\nIndique la pizza que desea ordenar \n";
    cin >> pizza;
    
    if(pizza == 1){
        cout << "\n     MENU VEGETARIANO \n"; 
        cout << "1. Pimiento \n";
        cout << "2. Tofu \n";

        cout << "\nIngredientes extra: \n";
        cin >> ingrediente; 
        if(ingrediente == 1){
            cout << "\n     PEDIDO \n"; 
            cout << "Pizza: \n" << "  Pizza vegetariana \n";
            cout << "Ingredientes: \n" << "  Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "  Pimiento";
        }else if(ingrediente == 2){
            cout << "\n     PEDIDO \n"; 
            cout << "Pizza: \n" << "  Pizza vegetariana \n";
            cout << "Ingredientes: \n" << "  Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "  Tofu";
        }
    }else if(pizza == 2){
        cout << "\n     MENU NO VEGETARIANO \n";
        cout << "1. Peperoni \n";
        cout << "2. Jamon \n";
        cout << "3. Salmon \n";

        cout << "\nIngredientes extra: \n";
        cin >> ingrediente; 
        if(ingrediente == 1){
            cout << "\n     PEDIDO \n"; 
            cout << "Pizza: \n" << "  Pizza no vegetariana \n";
            cout << "Ingredientes: \n" << "  Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "  Peperoni";
        }else if(ingrediente == 2){
            cout << "\n     PEDIDO \n"; 
            cout << "Pizza: \n" << "  Pizza no vegetariana \n";
            cout << "Ingredientes: \n" << "  Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "  Jamon";
        }else if(ingrediente == 3){
            cout << "\n     PEDIDO \n"; 
            cout << "Pizza: \n" << "  Pizza no vegetariana \n";
            cout << "Ingredientes: \n" << "  Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "  Salmon";
        }
    }
    cout << endl;
    return 0;
}