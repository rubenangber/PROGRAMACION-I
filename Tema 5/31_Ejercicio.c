#include <stdio.h>
#include <stdlib.h>
#define K1 '6'
#define K2 '9'

int main() {
    char i, j, k;
    int  cuantas = 0;
    
    for (i = K1; i <= K2; i++) {
       for (j = i + 1; j <= K2; j++) {
            for (k = j + 1; k <= K2; k++) {
                printf("%c%c%c\n", i, j, k);
                cuantas++;
            }
       }
    }

    printf("Combinaciones encontradas >> %d\n", cuantas); 
    
    return 0;
}
