#include <iostream>


using namespace std; 

//FUNCTION PROTOTYPE
void colocarJugada(int);
int seleccionarJugada();
bool comprobarCasillaOcupada(int);
void crearTablero();
//void pedirJugada();
//void revisarJugada();
//void revisarGanador();
int obtenerJugada(); //jugada tablero real 
int obtenerMejorJugada(); //jugada tablero imaginario 

//GLOBAL VARIABLE
char estGato[6][11];
int turnoJugador = 1; 
char areaJuego[3][3] = {{'1', '2', '3'},
                       {'4', 'o', '6'},
                       {'7', '8', '9'}};
int jugada;
int ganador;
const string PC = "Maquina"; //ya no le puedes asignar otro valor 
const string HUMANO = "Humano";
const string TABLERO = "Real";
const string TABLERO = "Imaginario";

int main(){
    
    int jugada; 
    bool casillaOcupada = true; 
    system("cls");
    jugada = seleccionarJugada();
    cout << jugada << endl;

    for (int i = 1; i < 9; i++)
    {
        casillaOcupada = comprobarCasillaOcupada(i);
    if (casillaOcupada == true)
        cout << "ocupado";
    else   
        cout << "libre";

    cout << endl;
    }

/*
    while(turno < 9 && ganador = false){
        if(turno%2 == 0){
            jugada = pedirJugada();
        }else{
            jugada = obtenerJugadaPC();
        }

        jugadaOK = revisarJugada(jugada);
        if (jugadaOK == true){
            colocarJugada();
            ganador = revisarGanador();
        }
        if (ganador == true){
            cout << "Mensaje al ganador";
        }
    }
*/

/*
    do{
        jugada = SeleccionarJugada();
        casillaOcupada = comprobarCasillaOcupada(jugada);
        if(casillaOcupada == true){
            //colocarJugada(jugada);
            //system("clear");
            //construirTablero();
        cout << "Otra vez";
        }
    }while(casillaOcupada == true);
    */
    return 0; 
}

void colocarJugada(int jugada){
    char valorJugada; 

    if(turnoJugador%2==0){ //Parees
        valorJugada = 'x';
    }else{
        valorJugada = 'o';
    }
    if(jugada == 1){
        areaJuego[0][0] = valorJugada;
    }
    cout << valorJugada << endl; 
}

int seleccionarJugada(){

    do{
        cout << "Dame tu jugada: ";
        cin >> jugada; 
    }while(jugada < 1 || jugada > 9);
        
        return jugada; 
}

bool comprobarCasillaOcupada(int jugada){
    int row, col;
    if(jugada == 1){
        row = 0;
        col = 0;
    }else if(jugada == 2){
        row = 0;
        col = 1; 
    }else if(jugada == 3){
        row = 0;
        col = 2; 
    }else if(jugada == 4){
        row = 1;
        col = 0; 
    }else if(jugada == 5){
        row = 1;
        col = 1; 
    }else if(jugada == 6){
        row = 1;
        col = 2; 
    }else if(jugada == 7){
        row = 2;
        col = 0; 
    }else if(jugada == 8){
        row = 2;
        col = 1; 
    }else if(jugada == 9){
        row = 2;
        col = 2; 
    }
    if(areaJuego[row][col] == 'x' || areaJuego[row][col] == 'o'){
        return true;
    }else{
        return false; 
    }

}

void crearTablero()
{
    int y, x;
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if (row = 0 || row = 3 || row = 6 || row = 8)
            {
                cout << "   |   |   " << endl;
            }
            else if (row = 1 &|| row = 4 || row = 7)
            {
                if(x = 1){
                    cout << " " << areaJuego[x-1][y] << "   |   " << areaJuego[x-1][y] << "   |   " << areaJuego[x-1][y] << "   ";
                }
                if(x = 4){
                    cout << " " << areaJuego[x-3][y] << "   |   " << areaJuego[x-3][y] << "   |   " << areaJuego[x-3][y] << "   "
                }
                if(x = 7){
                    cout << " " << areaJuego[x-4][y] << "   |   " << areaJuego[x-4][y] << "   |   " << areaJuego[x-4][y] << "   "
                }
                y++; 
            }else if(row = 2   row = 5){
                cout<< "   |   |   ";
            }
        }
    }
}
/*
int obtenerJugada(){
    srand();
    //Revisar que la PC gana 
    jugada = obtenerMejorJugada(PC);
    if (jugada != -1){
        return jugada;
    }
    
    jugada = obtenerMejorJugada(HUMANO);
    if(jugada != -1){
        return jugada; 
    }

    //return 1 + srand()%9; //random entre 1 y 9
}
*/
//Jugada de TABLERO IMAGINARIO
/*
void colocarJugadaImaginaria(int jugada){
    char valorJugada; 

    if(turnoJugador%2==0){ //Parees
        valorJugada = 'x';
    }else{
        valorJugada = 'o';
    }
    if(jugada == 1){
        areaJuego[0][0] = valorJugada;
    }
    //cout << valorJugada << endl; 
}
*/ 

/*
//var esGanador; 
if(areaJuego[0][0] != ' ' & areaJuego[0][1] == areaJuego[0][0] & areaJuego[0][2] == areaJuego[0][0]
    || areaJuego[1][0] != ' ' & areaJuego[1][1] == areaJuego[1][0] & areaJuego[1][2] == areaJuego[1][0]
        || areaJuego[2][0] != ' ' & areaJuego[2][1] == areaJuego[2][0] & areaJuego[2][2] == areaJuego[2][0]
        
            || areaJuego[0][0] != ' ' & areaJuego[1][0] == areaJuego[0][0] & areaJuego[2][0] == areaJuego[0][0]
                || areaJuego[1][0] != ' ' & areaJuego[1][1] == areaJuego[0][1] & areaJuego[2][1] == areaJuego[0][1]
                    || areaJuego[2][0] != ' ' & areaJuego[2][1] == areaJuego[2][0] & areaJuego[2][2] == areaJuego[2][0]){
    esGanador = true; 
}
*/