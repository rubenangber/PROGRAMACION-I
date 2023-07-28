#include <stdio.h>
#include <stdlib.h>
#define FIL 100
#define COL 100

int main() {
    int matriz[FIL][COL];
    int fil, col, i, j;

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
            printf("Matriz[%d][%d] >> ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz inicial\n");
    for(i = 0; i < fil; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDescendente por filas, ascendente por columnas\n");
    for(i = fil - 1; i >= 0; i--) {
        for(j = 0; j < col; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDescendente por columnas, descendente por filas\n");
    for(j = col -1 ; j >= 0; j--) {
        for(i = fil - 1; i >= 0; i--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nAscendente por columnas, ascendente por filas\n");
    for(j = 0; j < col; j++) {
        for(i = 0; i < fil; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}