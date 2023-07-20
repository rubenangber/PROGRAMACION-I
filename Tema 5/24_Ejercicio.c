#include <stdio.h>
#include <stdlib.h>
#define K1 '1'
#define K2 '4'

int main() {
    char i, j, k;
    int  cuantas = 0; 

    for (i = K1; i <= K2; i++) {
        for (j = K1; j <= K2; j++) {
            for (k = K1; k <= K2; k++) {
                if ((i != j) && (i != k) && (j != k)) {
                    printf("%c%c%c\n", i, j, k);
                    cuantas++;
                }
            }
        }
    }

    printf("Variaciones encontradas >> %d\n", cuantas);
    
    return 0;
}
