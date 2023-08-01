#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long factorial(long);
long combinatorio(long, long);

int main() {
    long m, n;
    double p, probabilidad;

    do {
        printf("Introduzca m >> ");
        scanf("%ld", &m);
    } while (m < 0);

    do {
        printf("Introduzca n >> ");
        scanf("%ld", &n);
    } while (0 > n && n <= m);

    do {
        printf("Introduzca p >> ");
        scanf("%lf", &p);
    } while (0 > p && p <= 1);

    probabilidad = (double)combinatorio(m, n) * pow(p, n) * pow(1 - p, m - n);

    printf("La probabilidad es >> %lf\n", probabilidad);

    return 0;
}

long factorial(long num) {
    int i, suma = 1;

    for (i = num; i > 0; i--) {
        suma = suma * i;
    }

    return suma;
}

long combinatorio(long m, long n) {
    long comb, mn = m - n;

    comb = factorial(m) / (factorial(n) * factorial(mn));

    return comb;
}