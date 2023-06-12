#include <stdio.h>
int fila = 0;
int columna = 0;

int comprobar_movimiento(int fila, int columna, int movimientos) {
    if (es_movimiento_valido(fila, columna)) {
        movimientos++;
        return movimientos; // Movimiento válido
    } else {
        return movimientos; // Movimiento inválido
    }
}

// Funciones para mover el jugador en las diferentes direcciones
void mover_arriba() {
    int nuevaFila = fila - 1;
    int nuevaColumna = columna;
    
    if (verificarMovimiento(nuevaFila, nuevaColumna)) {
        fila = nuevaFila;
        columna = nuevaColumna;
        printf("Movimiento hacia arriba realizado.\n");
    } else {
        printf("Movimiento inválido hacia arriba.\n");
    }
}

void mover_izquierda() {
    int nuevaFila = fila;
    int nuevaColumna = columna - 1;
    
    if (verificarMovimiento(nuevaFila, nuevaColumna)) {
        fila = nuevaFila;
        columna = nuevaColumna;
        printf("Movimiento hacia la izquierda realizado.\n");
    } else {
        printf("Movimiento inválido hacia la izquierda.\n");
    }
}

void mover_derecha() {
    int nuevaFila = fila;
    int nuevaColumna = columna + 1;
    
    if (verificarMovimiento(nuevaFila, nuevaColumna)) {
        fila = nuevaFila;
        columna = nuevaColumna;
        printf("Movimiento hacia la derecha realizado.\n");
    } else {
        printf("Movimiento inválido hacia la derecha.\n");
    }
}

void mover_abajo() {
    int nuevaFila = fila + 1;
    int nuevaColumna = columna;
    
    if (verificarMovimiento(nuevaFila, nuevaColumna)) {
        fila = nuevaFila;
        columna = nuevaColumna;
        printf("Movimiento hacia abajo realizado.\n");
    } else {
        printf("Movimiento inválido hacia abajo.\n");
    }
}

// Función para mover al jugador hacia arriba
void movimiento(int fila, int columna){
  char mov;
  printf("Has un movimiento con wasd  \n");
  scanf("%c", &mov);
  switch(mov){
    case 'w':
    mover_arriba();
    break;

    case 'a':
    mover_izquierda();
    break;

    case 's':
    mover_derecha();
    break;

    case 'd':
    mover_abajo();
    break;
  }
}
