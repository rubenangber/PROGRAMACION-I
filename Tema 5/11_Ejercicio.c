#include <stdio.h>
#include <stdlib.h>

int main() {
    double factorial = 1;
    int num, i;

    printf("Introduzca el numero >> ");
    scanf("%d", &num);

    printf("BUCLE DESDE (FOR)\n");
    for (i = 1; i <= num; i++) {
        factorial = factorial * i;
    }
    printf("%.0f\n", factorial);

    printf("BUCLE MIENTRAS (WHILE)\n");
    i = 1;
    factorial = 1;
    while (i <= num) {
        factorial = factorial * i;
        i++;
    }
    printf("%.0f\n", factorial);

    printf("BUCLE REPETIR MIENTRAS (DO WHILE)\n");
    i = 1;
    factorial = 1;
    do {
        factorial = factorial * i;
        i++;
    } while (i <= num);
    printf("%.0f\n", factorial);

    return 0;
}
