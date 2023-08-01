#include <stdio.h>
#include <stdlib.h>
#define DIM 50

int  divisores(unsigned int *, int, unsigned int);
void presentaVector(unsigned int *, int);

int main() {
    unsigned int vdiv[DIM];
    int cuantos, numero;

    printf("Introduzca el numero >> ");
    scanf("%d", &numero);

    cuantos = divisores (vdiv, DIM, numero);

    if (cuantos < 0) {
	    printf("ERROR. Desbordamiento vector divisores longitud %d\n", DIM);
    } else {  
        printf("El numero %u tiene >> %d divisores\n", numero, cuantos);
	    presentaVector (vdiv, cuantos);
    }

    return 0;  
}

int divisores (unsigned int *v, int dim, unsigned int num) {
    int contar = 0;
    unsigned int k = 0;

    while (k++ < num) {
        if (num % k == 0) {
            if (contar < dim) {
                v[contar++] = k;
            } else {
                return -1;
            }
        }
    }
    return contar;
}

void presentaVector (unsigned int *v, int dim) {
    int i;
    for (i = 0; i < dim; i++) {
	    printf("%u ", v[i]);
    }
    printf("\n");
}
