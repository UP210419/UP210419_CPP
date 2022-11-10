#include <iostream>

using namespace std; 
int main(){

    char estGato[6][11];
    /*char areaJuego[3][3] = {'1', '2', '3'}, 
                           {'4', '5', '6'}, 
                           {'7', '8', '9'};*/

    for(int row = 0; row < 6; row++){
        for(int col = 0; col < 11; col++){
            if(row % 2 == 0 && col != 3 && col != 7){
                cout << "-";
            }else if(row % 2 == 0 && col != 3 || col != 7){
                cout << "|";
            }
        }
    }
    cout << endl; 
    return 0; 

}