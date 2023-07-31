#include <stdio.h>
#include <stdlib.h>
#define FILAS 10
#define COLUMNAS 10
#define SUBMATRICES_MAX 64

int main() {
    int matriz[FILAS][COLUMNAS];
    int* punteros_submatrices[SUBMATRICES_MAX] = {0};
    int submatriz[3][3];
    int contador_submatrices = 0;
    int i, j, k, fila, columna;

    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("Matriz[%d][%d] >> ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (fila = 0; fila < FILAS - 2; fila++) {
        for (columna = 0; columna < COLUMNAS - 2; columna++) {
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    submatriz[i][j] = matriz[fila + i][columna + j];
                }
            }
            int simetrica = 1;
            for (i = 0; i < 3 && simetrica; i++) {
                for (j = i + 1; j < 3; j++) {
                    if (submatriz[i][j] != submatriz[j][i]) {
                        simetrica = -1;
                        break;
                    }
                }
            }
            if (simetrica) {
                punteros_submatrices[contador_submatrices] = &matriz[fila][columna];
                contador_submatrices++;
                if (contador_submatrices >= SUBMATRICES_MAX) {
                    printf("Advertencia >> Se han encontrado demasiadas submatrices simétricas\n");
                    break;
                }
            }
        }
    }

    printf("Submatrices 3x3 simétricas encontradas\n");
    for (k = 0; k < contador_submatrices; k++) {
        printf("Submatriz %d\n", k + 1);
        int* puntero_submatriz = punteros_submatrices[k];
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", puntero_submatriz[i * COLUMNAS + j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
