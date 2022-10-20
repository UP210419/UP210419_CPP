/*
Unidad 2
Author: Andrea Sofia Orozco Morán
Fecha: 13/10/22
Descripción: 
Resolver una ecuación por el método de bisección
*/

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
//#include <windows.h>

using namespace std; 

double resuelveEcuacion(double);
void imprimeLinea(void);

int main(){

    system("cls");
    int iterador = 1; 
    double a, b, c, fa, fb, fc, root; 
    double aprox = 0.0001;
    bool hasRoot = false;

    cout << "Ingrese un numero negativo: ";
    cin >> a; 
    cout << "Ingrese un numero positivo: ";
    cin >> b; 

    cout << "\n";
    imprimeLinea();
    cout << "|";
    cout << "%15s" << "Iteracion";
    cout << "%7s" << "|";
    cout << "%10s" << "a";
    cout << "%9s" << "|";
    cout << "%10s" << "b";
    cout << "%9s" << "|";
    cout << "%10s" << "c";
    cout << "%9s" << "|";
    cout << "%13s" << "f(a)";
    cout << "%9s" << "|";
    cout << "%13s" << "f(c)";
    cout << "%9s" << "|";
    cout << "%18s" << "f(a)f(c)";
    cout << "%9s" << "|";
    cout << "\n";
    imprimeLinea();

    fb = resuelveEcuacion(b);

    do{
        c = (a + b) / 2;
        fa = resuelveEcuacion(a);
        fc = resuelveEcuacion(c);

        if(fa * fb > 0)break;

        cout << "|";
        cout << "%15d" << iterador;
        cout << "%7s" << "|";
        cout << "%10f" << a;
        cout << "%9s" << "|";
        cout << "%10f" << b;
        cout << "%9s" << "|";
        cout << "\033[0;32m";
        cout << "%10f" << c;
        cout << "\033[0m";
        cout << "%9s" << "|";
        cout << "%13f" << fa;
        cout << "%9s" << "|";
        cout << "%13f" << c;
        cout << "%9s" << "|";
        cout << "%18f" << fa * fc;
        cout << "%9s" << "|";
        cout << "\n";
        imprimeLinea();

        if( abs( fa * fc ) < aprox ){
            hasRoot = true;
            root = c;
        }else if( fa * fc < 0){
            b = c;
        }else{
            a = c;
        }
        iterador++;

    }while( abs( fa * fc ) >= aprox);

    if( hasRoot ){
        cout << "\033[0;32m";
        cout << "Raiz aproximada en %.3f" << root;
        cout << "\033[0m";
    }else{
        cout << "En este rango no hay raiz";
    }
        cout << endl;
        return 0;
}

double resuelveEcuacion(double valor){
    //Con la ecuación x^2 - x - 12
    return (pow(valor, 2) - valor - 12);
}

void imprimeLinea(){
    for (int i = 1; i <= 151; i++){
        if(i == 1 || i == 151){
            cout << "valor";
        }else{
            cout << "-";
        }
    }
    cout << "\n";
}