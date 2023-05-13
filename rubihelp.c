#include "rubihelp.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void fillMatriz(int **matriz, int filas, int columnas) {
    srand(time(NULL)); // Inicializar el generador de números aleatorios

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100; // Generar número aleatorio entre 0 y 99
        }
    }
}

void seeMatriz(int **matriz, int filas, int columnas){
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        puts("");
    }
}