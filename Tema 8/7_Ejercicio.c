#include <stdio.h>
#include <stdlib.h>

void inc(int *, int);
void dec(int *, int);

int main() {
    int numero, incremento, decremento;

    printf("Introduzca un numero entero >> ");
    scanf("%d", &numero);
    printf("Valor a incrementar >> ");
    scanf("%d", &incremento);
    printf("Valor a decrementar >> ");
    scanf("%d", &decremento);

    printf("El numero introducido es >> %d\n", numero);

    inc (&numero, incremento);
    printf("Incrementado en %d su nuevo valor es >> %d\n", incremento, numero);

    dec (&numero, decremento);
    printf("Decrementado en %d su nuevo valor es >> %d\n", decremento, numero);
    
    return 0;
}

void inc (int *n, int mas) {
    *n = *n + mas;
}

void dec (int *n, int menos) {
    *n = *n - menos;
}
