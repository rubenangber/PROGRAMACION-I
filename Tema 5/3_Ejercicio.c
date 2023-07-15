#include <stdlib.h>
#include <stdio.h>
#define MAX 20

int main() {
    int num, i, j;

    printf("Introduzca un numero >> ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        for (j = 0; j < MAX; j++) {
            printf("%d * %d >> %d\n", j, i, (i * j));
        }
    }

    return 0;
}
