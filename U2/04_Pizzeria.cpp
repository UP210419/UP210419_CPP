/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 28/09/22
<<<<<<< HEAD
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
=======
Descripción: Muestra uso del if 
La pizzeria Bella Napoli ofrece pizzas vegetarianas y 
no vegetarianas a sus clientes.
*/

//Libreria para manejo de entrada y salidas de pantalla 
#include <iostream>

//Uso de namespace para evitar el std::
using namespace std; 

//Función principal de tipo entero 
int main(){

    char pizza;

    while (pizza == 'v')
    {
      cout << "Eliga su pizz v/nv \n";
      cin >> pizza; 
    }
    //Al ser una función debe retornar un valor, en este caso 0
>>>>>>> e9ea89df4fee6b35169544836cd26b3aeaef9439
    return 0;
}