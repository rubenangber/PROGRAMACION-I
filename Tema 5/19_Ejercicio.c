#include <stdio.h>
#include <stdlib.h>

int main() {
    int lim;
    double t1 = 1, t2 = 1, tn;

    do {
        printf("Introduce el limite para el termino a representar >> ");
        scanf("%d", &lim);
    } while (lim < 1 || lim > 50);

    printf("%.0f %.0f ", t1, t2);
    for (int i = 0; i < lim - 2; i++) {
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
        printf("%.0f ", tn);
    }
    printf("\n");

    return 0;
}