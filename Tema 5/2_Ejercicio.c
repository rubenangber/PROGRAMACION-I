#include <stdlib.h>
#include <stdio.h>
#define LIMINF 0
#define LIMSUP 30000

int main() {
    int limite1, limite2, num;
    float sum = 0;
    int cuantos = 0, temp, i;

    do {
        printf("Introduce el limite inferior >> ");
        scanf("%d", &limite1);
    } while (limite1 < LIMINF || limite1 > LIMSUP);

    do {
        printf("Introduce el limite superior >> ");
        scanf("%d", &limite2);
    } while (limite2 < LIMINF || limite2 > LIMSUP);

    if (limite2 < limite1) {
        temp = limite1;
        limite1 = limite2;
        limite2 = temp;
    }

    do {
        printf("Introduce el numero >> ");
        scanf("%d", &num);
    } while (num < limite1 || num > limite2);

    for (i = limite1; i < limite2; i++) {
        if (i % num == 0) {
            cuantos++;
            sum = sum + i;
            printf("%d ", i);
        }
    }
    
    printf("\n%d %f\n", cuantos, sum);

    return 0;
}
