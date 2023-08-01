#include <stdio.h>
#include <stdlib.h>

long factorial(long);
long combinatorio(long, long);

int main() {
    long m, n, comb;

    printf("Introduzca m >> ");
    scanf("%ld", &m);
    printf("Introduzca n >> ");
    scanf("%ld", &n);

    comb = combinatorio(m, n);

    printf("El combinatorio de %ld y %ld es >> %ld\n", m, n, comb);

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