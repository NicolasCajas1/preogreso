#include <stdio.h>
#include "player.h"
#define FILAS 5
#define COLUMNAS 5

// Matriz que representa el laberinto
int laberinto[FILAS][COLUMNAS] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

// Función para imprimir el laberinto
void imprimir_laberinto() {
    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {
            printf("%c ", laberinto[fila][columna]);
        }
        printf("\n");
    }
}

int es_movimiento_valido(int x, int y) {
    if (x < 0 || x > 4 || y < 0 || y > 4 || laberinto[y][x == 1]){
      return 0;
    }
    return 1;
}


//comprobara movimientos 
int comprobar_movimiento(int fila, int columna, int movimientos) {
    if (es_movimiento_valido(fila, columna)) {
        movimientos++;
        return movimientos; // Movimiento válido
    } else {
        return movimientos; // Movimiento inválido
    }
}


