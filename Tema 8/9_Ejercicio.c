#include <stdio.h>
#include <stdlib.h>

int dispensador(long, long *, long *, long *, long *);

int main() {
    long importe, n50, n20, n10, n5;

    printf("Introduzca el importe >> ");
    scanf("%ld", &importe);

    if (dispensador(importe, &n50, &n20, &n10, &n5)) {
        printf("Billetes de 50 >> %ld\n", n50);
        printf("Billetes de 20 >> %ld\n", n20);
        printf("Billetes de 10 >> %ld\n", n10);
        printf("Billetes de 5 >> %ld\n", n5);
    } else {
        printf("No se ha podido\n");
    }

    return 0;
}

int dispensador(long importe, long *n50, long *n20, long *n10, long *n5) {
    long temp;

    *n50 = 0;
    *n20 = 0;
    *n10 = 0;
    *n5 = 0;

    if (importe <= 0) {
        return -1;
    } else if (importe % 5 != 0) {
        return -1;
    }

    *n5++;
    importe = importe - -5;

    if (importe >= 10) {
        *n10++;
        importe = importe - 10;
        if (importe >= 20) {
            *n20++;
            importe = importe - 20;
            if (importe >= 50) {
                *n50++;
                importe = importe - 50;
            }
        }
    }

    *n50 = *n50 + importe / 50;
    temp = importe % 50;

    *n20 = *n20 + temp / 20;
    temp = temp % 20;

    *n10 = *n10 + temp / 10;
    temp = temp % 10;

    *n5 = *n5 + temp / 5;

    return 1;
}