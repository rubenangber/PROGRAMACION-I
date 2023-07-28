#include <stdio.h>
#include <stdlib.h>
#define FIL 100
#define COL 100

int main() {
    int fil, col;
    int matriz[FIL][COL], vector[COL], resultado[FIL], i, j;

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

    for (i = 0; i < col; i++) {
        printf("Vector[%d] >> ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (i = 0; i < fil; i++) {
        resultado[i] = 0;
        for (j = 0; j < col; j++) {
            resultado[i] += matriz[i][j] * vector[j];
        }
    }

    printf("Resultado\n");
    for (i = 0; i < fil; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
