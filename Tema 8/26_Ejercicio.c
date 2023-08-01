#include <stdio.h>
#include <stdlib.h>
#define FIL 5
#define COL 3

void iniciar(float (*)[], int, float);
void presentaMatriz(float (*)[], int);

int main() {
    float mat[FIL][COL], valor;

    printf("Introduzca un valor >> ");
    scanf("%f", &valor);

    iniciar(mat, FIL, valor);
    presentaMatriz(mat, FIL);

    return 0;
}

void iniciar(float (*mat)[COL], int fil, float valor) {
    int i, j;

    for(i = 0; i < fil; i++) {
        for(j = 0; j < COL; j++) {
            mat[i][j] = valor;
        }
    }
}

void presentaMatriz(float (*mat)[COL], int fil) {
    int i, j;

    for(i= 0; i < fil; i++) {
        for(j = 0; j < COL; j++) {
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
}