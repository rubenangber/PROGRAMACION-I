#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define FIL 25
#define COL 25

int main () {
    long matrizA[FIL][COL];
    long matrizB[FIL][COL];
    long matrizP[FIL][COL];
    int filA, colA, filB, colB, filP, colP, f, c, j;

    do { 
        printf("Filas matriz A >> ");
        scanf("%d", &filA);
    } while ((filA <=0) || (filA > FIL));

    do { 
        printf("Columnas matriz A >> ");
        scanf("%d", &colA);
    } while ((colA <=0) || (colA > COL));

    filB = colA;

    do { 
        printf("Columnas matriz B >> ");
        scanf("%d", &colB);
    } while ((colB <=0) || (colB > COL));

    printf("\nMatriz A\n");
    for (f = 0; f < filA; f++) {
        for (c = 0; c < colA; c++) { 
            printf("Matriz A[%d][%d] >> ", f + 1, c + 1);
	        scanf("%ld", &matrizA[f][c]);
        }
    }

    printf("\n\nMatriz B\n");
    for (f = 0; f < filB; f++) {
        for (c = 0; c < colB; c++) { 
            printf("Matriz B[%d][%d] >> ", f + 1, c + 1);
	        scanf("%ld", &matrizB[f][c]);
        }
    }

    filP = filA;
    colP = colB;


    for (f = 0; f < filA; f++) {
        for (c = 0; c < colB; c++) { 
            matrizP[f][c] = 0;
            for (j = 0; j < colA; j++) {
                matrizP[f][c] = matrizP[f][c] + (matrizA[f][j] * matrizB[j][c]);
            }
        }
    }

    printf("\nMatriz A\n");
    for (f = 0; f < filA; f++) {
        for (c = 0; c < colA; c++) {
	        printf("%5ld", matrizA[f][c]);
        }
        printf("\n");
    }

    printf("\nMatriz B\n");
    for (f = 0; f < filA; f++) {
        for (c = 0; c < colA; c++) {
	        printf("%5ld", matrizB[f][c]);
        }
        printf("\n");
    }

    printf("\nMatriz Producto\n");
    for (f = 0; f < filA; f++) {
        for (c = 0; c < colA; c++) {
	        printf("%5ld", matrizP[f][c]);
        }
        printf("\n");
    }

    return 0;
}
