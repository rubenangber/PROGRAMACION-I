#include <stdio.h>
#include <stdlib.h>
#define FIL 100
#define COL 100

int main() {
    int fil, col, i, j, xmax, ymax, xmin, ymin, max, min;
    int matriz[FIL][COL];

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

    max = matriz[0][0];
    min = matriz[0][0];
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            if (matriz[i][j] > max) {
                max = matriz[i][j];
                xmax = i + 1;
                ymax = j + 1;
            }
            if (matriz[i][j] < min) {
                min = matriz[i][j];
                xmin = i + 1;
                ymin = j + 1;
            }
        }
    }
    printf("Elemento MAX >> %d\n", max);
    printf("Coordenadas MAX >> %d %d\n", xmax, ymax);
    printf("Elemento MIN >> %d\n", min);
    printf("Coordenadas MIN >> %d %d\n", xmin, ymin);

    return 0;
}