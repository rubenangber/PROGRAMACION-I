#include <stdio.h>
#include <stdlib.h>
#define FIL 100
#define COL 100

int main() {
    int matriz[FIL][COL];
    int fil, col, i, j, sumaEx, sumaInt;

    do {
        printf("Ingrese el numero de filas de la matriz >> ");
        scanf("%d", &fil);
    } while (fil < 3 || fil > FIL);

    do {
        printf("Ingrese el numero de columnas de la matriz >> ");
        scanf("%d", &col);
    } while (col < 3 || col > COL);

    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            printf("Matriz[%d][%d] >> ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 1; i < fil-1; i++) {
        sumaEx = sumaEx + matriz[i][0];
        sumaEx = sumaEx + matriz[i][col - 1];
    }
    for(j = 0; j < col; j++) {
        sumaEx = sumaEx + matriz[0][j];
        sumaEx = sumaEx + matriz[fil - 1][j];
    }


    for (i = 1; i < fil - 1; i++) {
        for (j = 1; j < col - 1; j++) {
            sumaInt = matriz[i][j];
        }
    }

    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Suma exterior >> %d\n", sumaEx);
    printf("Suma interior >> %d\n", sumaInt);

    if (sumaEx >= sumaInt) {
        printf("La matriz es un marco\n");
    } else {
        printf("La matriz NO es un marco\n");
    }

    return 0;
}