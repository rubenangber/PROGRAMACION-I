#include <stdio.h>
#include <stdlib.h>
#define K1 'A'
#define K2 'D'

int main() {
    char i, j;
    int  cuantas = 0;

    for (i = K1; i <= K2; i++) {
        for (j = i + 1; j <= K2; j++) {
            printf("%c%c\n", i, j);
    	    cuantas++;
        }
    }

    printf("Combinaciones encontradas >> %d\n", cuantas);

    return 0;
}
