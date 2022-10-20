/*
Unidad 2
Author: Andrea Sofia Orozco Morán
Fecha: 13/10/22
Descripción: 
Resolver una ecuación por el método de bisección
*/

#include <iostream>
#include <cmath>

using namespace std; 

float resuelveEcuacion(float valor){
    //Con la ecuación x^2 - x + 12
    return (pow(valor, 2) - valor + 12);
}

int main(){

    int iterador = 1; 
    float a;
    float b;
    float c;
    float ya, yb, yc; 

    cout << "Ingrese un numero negativo: ";
    cin >> a; 
    cout << "Ingrese un numero positivo: ";
    cin >> b; 

    //cout << "|  " << "a" << "b" << "c" << "ya" << "yb" << "yc" << "  |";

    c = (a+b)/2;
    ya = resuelveEcuacion(a);
    yb = resuelveEcuacion(b);
    yc = resuelveEcuacion(c);
    cout << "c =" << c; 
    cout << "ya =" << yb;
    cout << endl;

    do{
        if(ya*yc < 0){
            b = c;
        }else if(yc*yb < 0){
            a = c; 
        }else{
            cout << "No existe";
        }
        break;
    }while(yc >= 0.01 || yc <= 0.01);
        cout << endl;
        return 0;
}