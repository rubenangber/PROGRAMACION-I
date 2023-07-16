#include <stdio.h>
#include <stdlib.h>
#define BLANCO ' '

int main() {
    char car;
    int num, i, j;

    printf("Introduce el caracter >> ");
    scanf(" %c", &car);
    printf("Introduce el numero >> ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        for (j = 0; j < (num - i); j++) {
            printf("%c", BLANCO);
        }
        for (j = 0; j < i; j++) {
            printf("%c", car);
        }
        printf("\n");
    }

    for (i = 0; i < (num - 1); i++) {
        for (j = 0; j < i; j++) {
            printf("%c", BLANCO);
        }
        for (j = 1; j < (num - i); j++) {
            printf("%c", car);
        }
        printf("\n");
    }

    return 0;
}