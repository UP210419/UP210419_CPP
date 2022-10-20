/*
Unidad 2. Uso del if 
Author: Andrea Sofia Orozco Morán 
Fecha: 12/10/22
Descripción: 
*/

#include <iostream>

using namespace std; 
int main(){

    int n;
    int x = 1; 
    int res;

    cout << "Introduce el numero de la tabla que deseas ver: ";
    cin >> n;
    do{
        res = n*x;

        cout << "|  " << x << "     x     " << n << "     =     " << res << "   |" << "\n";
        cout << "--------------------------------- \n";
        x++;
        cout << endl;
    }while(x <= 10);

    
    return 0;
}