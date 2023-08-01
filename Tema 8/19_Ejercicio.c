#include <stdio.h>
#include <stdlib.h>

int mcd(int, int);
int mcm(int, int);

int main() {
    int num1, num2, resultado_mcd, resultado_mcm;

    printf("Ingrese el primer numero >> ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero >> ");
    scanf("%d", &num2);

    resultado_mcd = mcd(num1, num2);
    resultado_mcm = mcm(num1, num2);

    printf("El MCD de %d y %d es >> %d\n", num1, num2, resultado_mcd);
    printf("El MCM de %d y %d es >> %d\n", num1, num2, resultado_mcm);

    return 0;
}

int mcd(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}