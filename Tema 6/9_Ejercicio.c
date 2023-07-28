#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DIM 100

int main() {
    int dim, i;
    float numeros[DIM], desviaciones[DIM], cuadrados[DIM], media = 0, varianza = 0, desv;

    do {
        printf("Introduce la dimension del vector >> ");
        scanf("%d", &dim);
    } while (dim <= 0 || dim > DIM);

    for (i = 0; i < dim; i++) {
        printf("Vector[%d] >> ", i + 1);
        scanf("%f", &numeros[i]);
        media = media + numeros[i];
    }
    media = media / dim;

    for (i = 0; i < dim; i++) {
        desviaciones[i] = media - numeros[i];
        cuadrados[i] = pow(desviaciones[i], 2);
        varianza = varianza + cuadrados[i];
    }
    varianza = varianza / dim;

    desv = sqrt(varianza);

    printf("Numeros\tDesviaciones\tCuadrado desviaciones\n");
    for (i = 0; i < dim; i++) {
        printf("%.3f\t%f\t%f\n", numeros[i], desviaciones[i], cuadrados[i]);
    }
    printf("Media >> %f\n", media);
    printf("Varianza >> %f\n", varianza);
    printf("Desviacion estandar >> %f\n", desv);

    return 0;
}