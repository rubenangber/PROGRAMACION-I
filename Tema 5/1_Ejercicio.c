#include <stdlib.h>
#include <stdio.h>
#define N 10

int main() {
    int num, suma = 0, i = 0;

    while (i < N) {
        printf("Introduzca un numero >> ");
        scanf("%d", &num);
        suma = suma + num;
        i++;
    }

    printf("El resultado de la suma es >> %d\n", suma);

    return 0;
}
