#include <stdio.h>
#include "maze.h"

void mostrarMenu() {
    printf("----- MENÚ -----\n");
    printf("1. Jugar\n");
    printf("2. Créditos\n");
    printf("3. Salir\n");
    printf("----------------\n");
}
void jugar() {
    printf("¡Jugando!\n");
    imprimir_laberinto();
    // Lógica del juego
    // Aquí puedes agregar la implementación del juego
}

void mostrarCreditos() {
    printf("Créditos del juego:\n");
    printf("Desarrollado por: Nicolas\n");
    printf("ID de Banner: A00101726\n");
    // Puedes agregar más información sobre los créditos aquí
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                jugar();
                break;
            case 2:
                mostrarCreditos();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                break;
        }

        printf("\n");
    } while (opcion != 3);

    return 0;
}
