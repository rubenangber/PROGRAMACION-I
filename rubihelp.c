#include "rubihelp.h"
#include <time.h>

void fillVector(int *vector, int tam) {
    srand(time(NULL));

    for (int i = 0; i < tam; i++) {
        vector[i] = rand() % 100; 
    }
}

void seeVector(int *vector, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", vector[i]);
    }
}

void fillMatriz(int **matriz, int filas, int columnas) {
    srand(time(NULL));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100;
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