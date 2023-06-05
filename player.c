#include <stdio.h>
#include "maze.h"

// Función para mover al jugador hacia arriba
void mover_arriba() {
    if (fila > 0 && laberinto[jugador_fila - 1][columna] != '#') {
        jugador_fila--;
        num_movimientos++;
    }
}

// Función para mover al jugador hacia abajo
void mover_abajo() {
    if (fila < FILAS - 1 && laberinto[fila + 1][columna] != '#') {
        fila++;
        num_movimientos++;
    }
}

// Función para mover al jugador hacia la izquierda
void mover_izquierda() {
    if (columna > 0 && laberinto[fila][columna - 1] != '#') {
        columna--;
        num_movimientos++;
    }
}

// Función para mover al jugador hacia la derecha
void mover_derecha() {
    if (columna < COLUMNAS - 1 && laberinto[fila][columna + 1] != '#') {
        jugador_columna++;
        num_movimientos++;
    }
}

// Función para revisar si el jugador ganó
int jugador_gano() {
    if (fila == FILAS - 1 && columna == COLUMNAS - 1) {
        return 1;
    }
    return 0;
}
