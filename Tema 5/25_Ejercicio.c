#include <stdio.h>
#include <stdlib.h>
#define K1 'A'
#define K2 'F'

int main() {    
    char i, j, k, l;
    int  cuantas = 0;

    for (i = K1; i <= K2; i++) {
        for (j = K1; j <= K2; j++) {
            for (k = K1; k <= K2; k++) {
                for (l = K1; l <= K2; l++) {
                    if ((i != j) && (i != k) && (i != l) && (j != k) && (j != l) && (k != l)) {
                        printf("%c%c%c%c\n", i, j, k, l);
                        cuantas++;
                    }
                }
            }
        }
    }

    printf("Variaciones encontradas >> %d\n", cuantas);

    return 0;
}
