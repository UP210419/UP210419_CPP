/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 22/09/22
Descripción: Muestra el uso de if simple 
Los tramos impositivos para la declaración de la renta 
en un determinado país 
*/

#include <iostream>

using namespace std;
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

   cout << "Indique aqui la cantidad de renta anual: ";
   cin >> renta;
   
   cout << "Pago renta anual: $" << renta << "\n";

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
    impuesto = renta * .20;
   }
   if((renta >= 35000) && (renta <= 60000)){
    cout << "Tu impuesto es de 30%";
    impuesto = renta * .30;
   }
   if(renta > 60000){
    cout << "Tu impuesto es de 45%";
    impuesto = renta * .45;
   }
   cout << "\nEl pago total es de: $" << impuesto;
   cout << endl; 
   return 0; 
}