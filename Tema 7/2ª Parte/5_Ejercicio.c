#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char frase[100];
    int i;

    printf("Introduzca la frase >> ");
    gets(frase);

    i = 0;
    while (frase[i] != '\0') {
        printf("%c", tolower(frase[i]));
        i++;
    }
    printf("\n");

    i = 0;
    while (frase[i] != '\0') {
        printf("%c", toupper(frase[i]));
        i++;
    }
    printf("\n");

    return 0;
}