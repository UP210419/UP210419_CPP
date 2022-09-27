#include <iostream>

using namespace std; 
int main(){

    float puntuacion; 
    float rendimiento; 
    float inaceptable = 0.0;
    float aceptable = 0.4;
    float meritorio = 0.6;

    cout << "Su puntuacion es: \n";
    cin >> puntuacion; 
    if(puntuacion = inaceptable){
        rendimiento = puntuacion * 2400;
    }else if(puntuacion = aceptable){
        rendimiento = puntuacion * 2400;
    }else if(puntuacion = meritorio){
        rendimiento = puntuacion * 2400;
    }

    cout << "Tu nivel de rendimiento es " << puntuacion; 
    cout << "\nTu nivel de rendimiento es " << rendimiento; 
    cout << endl;
    return 0;
}