/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 22/09/22
Descripción: Muestra el uso de if simple 
Los tramos impositivos para la declaración de la renta 
en un determinado país 
*/

//Librería para manejo de entradas y salida de pantalla 
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero 
int main(){

    /*
    Los tramos impositivos para la declaración de la renta en un determinado país son los 
    siguientes: 

    Renta ----------------- Tipo impositivo
    Menos de $10,000        5%
    Entre $10 y $20 mil     15%
    Entre $20 y $35 mil     20%
    Entre $35 y $60 mil     30%
    Más de $60,000          45%
    */

   int renta; 
   float impuesto;

   //Solicuta renta anual 
   cout << "Cual es su renta anual \n";
   cin >> renta;

   if(renta < 10000){
    cout << "Tu impuesto es de 5%";
    impuesto = renta * .05;
   }

   if((renta >= 10000) && (renta <= 20000)){
    cout << "Tu impuesto es de 15%";
    impuesto = renta * .15;
   }

   if((renta >= 20000) && (renta <= 35000)){
    cout << "Tu impuesto es de 20%";
    impuesto = renta * .2;
   }

   if((renta >= 35000) && (renta <= 60000)){
    cout << "Tu impuesto es de 30%";
    impuesto = renta * .3;
   }

   if(renta > 60000){
    cout << "Tu impuesto es de 60%";
    impuesto = renta * .45;
   }
   //Imprime el resultado de impuesto correspondiente
   cout << "\nEl impuesto a pagar es de: $" << impuesto;
   cout << endl; 
   //Al ser una función debe retornar un valor, en este caso 0
   return 0; 
}