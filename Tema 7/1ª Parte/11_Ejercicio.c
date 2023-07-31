#include <stdio.h>
#include <stdlib.h>
#define MAX 3000

int main() {
    char frase[MAX], letra;
    int pos[MAX] = {0}, rep = 0;
    char *ptr;
    int i, j;

    printf("Introduzca una frase >> ");
    fgets(frase, MAX, stdin);

    ptr = frase;

    printf("Introduzca la letra que desea encontrar y contar >> ");
    scanf(" %c", &letra);

    j = -1;
    for (i = 0; *(ptr + i) != '\0'; i++) {
        if (*(ptr + i) == letra) {
            pos[++j] = i + 1;
            rep++;
        }
    }

    printf("La letra >> %c se encuentra en las posiciones >> ", letra);
    for (i = 0; i <= j; i++) {
        printf("%d ", pos[i]);
    }
    printf("\n");
    
    printf("%c se encuentra >> %d veces\n", letra, rep);

    return 0;
}