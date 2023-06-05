#include <stdio.h>
#include "player.h"
#define FILAS 5
#define COLUMNAS 5

// Matriz que representa el laberinto
void laberinto[FILAS][COLUMNAS] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
}

// Función para imprimir el laberinto
void imprimir_laberinto() {
    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {
            printf("%c ", laberinto[fila][columna]);
        }
        printf("\n");
    }
}
