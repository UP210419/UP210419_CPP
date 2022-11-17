#include <iostream>


using namespace std; 

//FUNCTION PROTOTYPE
void setMove(int); //colocarJugada
int selectMove(); //seleccionarJugada
bool checkBusySlot(int); //
void createBoard(); //crearTablero
//void pedirJugada();
//void revisarJugada();
//void revisarGanador();
int getMove(); //obtenerJugada //jugada tablero real 
int obtenerMejorJugada(); //jugada tablero imaginario 

//GLOBAL VARIABLE
char estGato[6][11];
int playerturn = 1; //turnoJugador
//areaJuego
char gamearea[3][3] = {{'1', '2', '3'},
                       {'4', 'o', '6'},
                       {'7', '8', '9'}};
int move; //jugada
int winner; //ganador
const string PC = "Maquina"; //ya no le puedes asignar otro valor 
const string HUMAN = "Humano"; //Humano
const string BOARD = "Real"; //Tablero
const string BOARD = "Imaginario";

int main(){
    
    int move; 
    //casillaOcupada
    bool boxBusy = true; 
    system("cls");
    move = selectMove();
    cout << move << endl;

    for (int i = 1; i < 9; i++)
    {
        boxBusy = checkBusySlot(i);
    if (boxBusy == true)
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

void setMove(int move){
    char moveValue; //valorJugada

    if(playerturn%2==0){ //Parees
        moveValue = 'x';
    }else{
        moveValue = 'o';
    }
    if(move == 1){
        gamearea[0][0] = moveValue;
    }
    cout << moveValue << endl; 
}

int selectMove(){

    do{
        cout << "Dame tu jugada: ";
        cin >> move; 
    }while(move < 1 || move > 9);
        
        return move; 
}

bool checkBusySlot(int move){
    int i, j;
    if(move == 1)
    {
        i = 0;
        j = 0;
    }else if(move == 2)
    {
        i = 0;
        j = 1; 
    }else if(move == 3)
    {
        i = 0;
        j = 2; 
    }else if(move == 4)
    {
        i = 1;
        j = 0; 
    }else if(move == 5)
    {
        i = 1;
        j = 1; 
    }else if(move == 6)
    {
        i = 1;
        j = 2; 
    }else if(move == 7)
    {
        i = 2;
        j = 0; 
    }else if(move == 8)
    {
        i = 2;
        j = 1; 
    }else if(move == 9)
    {
        i = 2;
        j = 2; 
    }
    if(gamearea[i][j] == 'x' || gamearea[i][j] == 'o')
    {
        return true;
    }else{
        return false; 
    }

}

void createBoard()
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
            else if (row = 1 || row = 4 || row = 7)
            {
                if(x = 1){
                    cout << " " << gamearea[x-1][y] << "   |   " << gamearea[x-1][y] << "   |   " << gamearea[x-1][y] << "   ";
                }
                if(x = 4){
                    cout << " " << gamearea[x-3][y] << "   |   " << gamearea[x-3][y] << "   |   " << gamearea[x-3][y] << "   ";
                }
                if(x = 7){
                    cout << " " << gamearea[x-4][y] << "   |   " << gamearea[x-4][y] << "   |   " << gamearea[x-4][y] << "   ";
                }
                y++; 
            }else if(row = 2 || row = 5){
                cout << "___|___|___";
            }
        }
    }
}

int getMove(){
    srand();
    //Revisar que la PC gana 
    move = obtenerMejorJugada(PC);
    if (move != -1){
        return move;
    }

    move = obtenerMejorJugada(HUMAN);
    if(move != -1){
        return move; 
    }

    //return 1 + srand()%9; //random entre 1 y 9
}

//Jugada de TABLERO IMAGINARIO
/*
void colocarJugadaImaginaria(int jugada){
    char moveValue; 

    if(turnoJugador%2==0){ //Parees
        moveValue = 'x';
    }else{
        moveValue = 'o';
    }
    if(jugada == 1){
        areaJuego[0][0] = moveValue;
    }
    //cout << moveValue << endl; 
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