#include <stdio.h>
#include <stdlib.h>
#define FIL 30
#define COL 30

int main() {
    int matriz[FIL][COL];
    int fil, col, i, j, filaElegida, columnaElegida, cont, encontrado = 0;
    float media = 0;

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

    do {
        printf("Ingrese la fila elegida >> ");
        scanf("%d", &filaElegida);
    } while (filaElegida <= 0 || filaElegida > fil);

    do {
        printf("Ingrese la columna elegida >> ");
        scanf("%d", &columnaElegida);
    } while (columnaElegida <= 0 || columnaElegida > col);

    cont = 0;
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            media = media + matriz[i][j];
            cont++;
            if (i == (filaElegida - 1) && j == (columnaElegida - 1)) {
                printf("Valor %d %d >> %d\n", filaElegida, columnaElegida, matriz[i][j]);
                encontrado = 1;
                break; //Sale del for interno
            }
        }
        if (encontrado) {
            break; //Sale del for externo
        }
    }

    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    media = media / cont;
    printf("Elementos >> %d\n", cont);
    printf("Media >> %.3f\n", media);

    return 0;
}