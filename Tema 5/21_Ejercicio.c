#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define blanco ' '

int main() {
    char interior, exterior;
    int h, i, j;

    printf("Introduzca caracter interior: ");
    scanf(" %c", &interior);
    printf("Introduzca caracter exterior: ");
    scanf(" %c", &exterior);
    printf("Introduzca la altura: ");
    scanf("%d", &h);

    printf("Primera figura\n");

    for (i = 1; i <= h; i++) {
        for (j = 0; j <= h-i; j++) {
            printf("%c", blanco);
        }
        for (j = 1; j < 2 * i - 1; j++) {
            printf("%c", interior);
        }
        printf("\n");
    }
    for (i = h; i > 1; i--) {
        for (j = 0; j <= h - i; j++) {
            printf("%c", blanco);
        }
        for (j = 1; j < 2 * i - 1; j++) {
            printf("%c", interior);
        }
        printf("\n");
    }

    printf("Segunda figura\n");

    for (i = 1; i <= h; i++) {
        for (j = 0; j <= h-i; j++) {
            printf("%c", exterior);
        }
        for (j = 1; j < 2 * i - 1; j++) {
            printf("%c", blanco);
        }
        for (j = 0; j <= h - i; j++) {
            printf("%c", exterior);
        }
        printf("\n");
    }
    for (i = h; i > 0; i--) {
        for (j = 0; j <= h - i; j++) {
            printf("%c", exterior);
        }
        for (j = 1; j < 2 * i - 1; j++) {
            printf("%c", blanco);
        }
        for (j = 0; j <= h - i; j++) {
            printf("%c", exterior);
        }
        printf("\n");
    }

   printf("Tercera figura\n");

    for (i = 1; i <= h; i++) {
        for (j = 0; j <= h-i; j++) {
            printf("%c", exterior);
        }
        for (j = 1; j < 2 * i - 1; j++) {
            printf("%c", interior);
        }
        for (j = 0; j <= h - i; j++) {
            printf("%c", exterior);
        }
        printf("\n");
    }
    for (i = h; i > 0; i--) {
        for (j = 0; j <= h - i; j++) {
            printf("%c", exterior);
        }
        for (j = 1; j < 2 * i - 1; j++) {
            printf("%c", interior);
        }
        for (j = 0; j <= h - i; j++) {
            printf("%c", exterior);
        }
        printf("\n");
    }

    return 0;
}