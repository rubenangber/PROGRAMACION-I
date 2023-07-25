#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define DIMMAX 25

int main() {
    float vector1[DIMMAX], vector2[DIMMAX], vsuma[DIMMAX];
    char terminar;
    int dim1, i;
    float modulov1, modulov2, prod_escalar;

    do {
        printf("Introduce dimension de los vectores >> ");
        scanf("%d", &dim1);

        for (i = 0; i < dim1; i++) {
            printf("vector1[%d] >> ", i + 1);
            scanf("%f", &vector1[i]);
        }
        for (i = 0; i < dim1; i++) {
            printf("vector2[%d] >> ", i + 1);
            scanf("%f", &vector2[i]);
        }

        modulov1 = 0;
        modulov2 = 0;

        for (i = 0; i < dim1; i++) {
            modulov1 = modulov1 + vector1[i] * vector1[i];
            modulov2 = modulov2 + vector2[i] * vector2[i];
        }        
        modulov1 = sqrt(modulov1);
        modulov2 = sqrt(modulov2);

        for (i = 0; i < dim1; i++) {
            vsuma[i] = vector1[i] + vector2[i];
        }

        prod_escalar = 0;

        for (i = 0; i < dim1; i++) {
            prod_escalar = prod_escalar + vector1[i] * vector2[i];
        }

        printf("Modulo 1 >> %f\n", modulov1);
        printf("Modulo 2 >> %f\n", modulov2);

        printf("Vector suma\n");
        for (i = 0; i < dim1; i++) {
            printf("%f ", vsuma[i]);
        }
        printf("\n");

        printf("Producto escalar >> %f\n", prod_escalar);

        do {
            printf("Quieres terminar (S/N) >> ");
            scanf(" %c", &terminar);
            terminar = toupper(terminar);
        } while (terminar != 'S' && terminar != 'N');

    } while (terminar != 'S');

    return 0;
}