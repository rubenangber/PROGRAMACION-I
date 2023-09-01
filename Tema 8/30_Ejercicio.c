#include <stdio.h>
#include <stdlib.h>

void simplificafraccion(long *, long *);

int main() {
    long numerador, denominador;

    printf("Introduce el numerador >> ");
    scanf("%ld", &numerador);
    
    printf("Introduce el denominador >> ");
    scanf("%ld", &denominador);

    simplificafraccion(&numerador, &denominador);

    printf("La fracción irreducible es >> %ld / %ld\n", numerador, denominador);

    return 0;
}

void simplificafraccion(long *nume, long *deno) {
    long a = *nume;
    long b = *deno;
    long temp;

    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    *nume /= a;
    *deno /= a;
}
