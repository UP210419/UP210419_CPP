#include <stdio.h>

using namespace std; 
#define DIM 4
#define VACIA '+'

void matriz_zero(char);
void imprimir_matriz();
int pedir_celda();
int revisar_ganador();
int revisar_diagonales();

int main() {
    int ganador = 0;
    int turno = 1;
    char matriz[3][3];

    matriz_zero(matriz);
    imprimir_matriz(matriz);

    while (!ganador) {
        if (turno) {
            ganador = pedir_celda(matriz, 'x');
        } else {
            ganador = pedir_celda(matriz, '0');
        }
        turno = !turno;
    }
    printf("Ganaste!!!");
    return 0;
}
int pedir_celda(char m[3][3], char marca) {
    //  Pide una celda, valida que este vacia, la llena y revisa si es un ganador.
    int fila, col;
    while (1) {
        printf("--- Jugador %c ---\n", marca);
        printf("> fila: ");
        scanf("%d", &fila);
        printf("> columna: ");
        scanf("%d", &col);

        if (fila >= 0 && fila < DIM && col >= 0 && col < DIM) {
            if (m[fila][col] == VACIA) {
                m[fila][col] = marca;
                imprimir_matriz(m);
                break;
            } else {
                printf("Celda está ocupada\n");
            }
        } else {
            printf("Coordenadas fuera de rango\n");
        }
    }

    return revisar_ganador(m, fila, col);
}
int revisar_ganador(char m[DIM][DIM], int fila, int col) {
    //  Revisa el jugador en la celda (fila, col) ha completado
    //  las celdas requeridas
    
    // Todas las celdas deben tener el mismo valor que (fila, col)
    char marca = m[fila][col];
    int i;

    //  Recorrer la misma fila contando las celdas iguales.
    for (i = 0; i < DIM; i++) {
        if (m[fila][i] != marca)
            break;
    }
    if (i == DIM) {
        return 1;
    }

    //  Recorrer la misma columna contando las celdas iguales.
    for (i = 0; i < DIM; i++) {
        if (m[fila][i] != marca)
            break;
    }
    if (i == DIM) {
        return 1;
    }

    //  Recorrer las diagonales
    return revisar_diagonales(m);
}