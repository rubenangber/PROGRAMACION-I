#include <stdio.h>
#include <stdlib.h>

int main() {
    float vector1[10] = {1.3, 20};
    float vector2[10] = {0};
    int lista[3] = {10, 20, 30};
    float numero = 123.45;
    char letra = 'K';
    char *pc;
    float *pf;
    pc = &letra;
    pf = &numero;
    int i;

    printf("Variable\tDireccion\tTamanio\tValor\n");
    for (i = 9; i >= 0; i--) {
        printf("vector1[%d]\t%p\t%ld\t%.2f\n", i, &vector1[i], sizeof(vector1[i]), vector1[i]);
    }

    for (i = 9; i >= 0; i--) {
        printf("vector2[%d]\t%p\t%ld\t%.2f\n", i, &vector2[i], sizeof(vector2[i]), vector2[i]);
    }

    for (i = 2; i >= 0; i--) {
        printf("lista[%d]\t%p\t%ld\t%d\n", i, &lista[i], sizeof(lista[i]), lista[i]);
    }

    printf("numero\t\t%p\t%ld\t%.2f\n", &numero, sizeof(numero), numero);
    printf("pc\t\t%p\t%ld\t%c\n", &pc, sizeof(pc), *pc);
    printf("pf\t\t%p\t%ld\t%.2f\n", &pf, sizeof(pf), *pf);
    printf("letra\t\t%p\t%ld\t%c\n", &letra, sizeof(letra), letra);

    return 0;
}