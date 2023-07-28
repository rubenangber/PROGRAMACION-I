#include <stdio.h>
#include <stdlib.h>
#define FIL 100
#define COL 100

int main() {
    int fil, col, i, j;
    int matrizA[FIL][COL], matrizB[FIL][COL], matrizS[FIL][COL];

    do {
        printf("Ingrese el numero de filas de la matriz >> ");
        scanf("%d", &fil);
    } while (fil <= 0 || fil > FIL);

    do {
        printf("Ingrese el numero de columnas de la matriz >> ");
        scanf("%d", &col);
    } while (col <= 0 || col > COL);

    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            printf("MatrizA[%d][%d] >> ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            printf("MatrizB[%d][%d] >> ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Matriz A\n");
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B\n");
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("Matriz suma\n");
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", matrizS[i][j]);
        }
        printf("\n");
    }

    return 0;
}