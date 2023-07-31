#include <stdio.h>
#include <string.h>

int main() {
    char frase[80], reversa[80];
    int length, i;

    printf("Ingrese una cadena: ");
    gets(frase);

    frase[strcspn(frase, "\n")] = '\0';

    length = strlen(frase);
    for (i = 0; i < length; i++) {
        reversa[i] = frase[length - 1 - i];
    }
    reversa[length] = '\0';

    printf("Cadena original >> %s\n", frase);
    printf("Cadena invertida >> %s\n", reversa);

    return 0;
}
