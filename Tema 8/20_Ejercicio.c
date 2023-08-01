#include <stdio.h>
#include <stdlib.h>

void doble(int *);
void triple(int *);
void cuadruple(int *);

int main() {
    int num1, num2, num3;

    printf("Introduzca un numero >> ");
    scanf("%d", &num1);

    num2 = num1;
    num3 = num1;

    doble(&num1);
    triple(&num2);
    cuadruple(&num3);

    printf("El doble es >> %d\n", num1);
    printf("El triple es >> %d\n", num2);
    printf("El cuadruple es >> %d\n", num3);

    return 0;
}

void doble(int *num) {
    *num = *num * 2;
}

void triple(int *num) {
    *num = *num * 3;
}

void cuadruple(int *num) {
    *num = *num * 4;
}
