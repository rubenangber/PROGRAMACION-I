#include <stdio.h>
#include <stdlib.h>
#define K1 'A'
#define K2 'E'

int main() {
    char i, j, k, l, m;
    int  cuantas = 0;

    for (i=K1; i<= K2; i++) {
        for (j=K1; j<= K2; j++) {
            for (k=K1; k<= K2; k++) {
                for (l=K1; l<= K2; l++) {
                    for (m=K1; m<= K2; m++) {
                        if ((i != j) && (i != k) && (j != k) && (i != l) && (i != m) && (j != k) && (j != l) && (j != m) && (k != l) && (k != m) && (l != m)) {
                            printf("%c%c%c%c%c\n", i, j, k, l, m);
                            cuantas++;
                        }
                    }
                }
            }
        }
    }
    printf("Permutaciones encontradas >> %d\n", cuantas);

    return 0;
}
