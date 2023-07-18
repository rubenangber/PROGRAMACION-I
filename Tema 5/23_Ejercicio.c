#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, num;

    srand(time(NULL));
    random = rand() % 10001;

    do {
        printf("Introduce numero >> ");
        scanf("%d", &num);
        if (random - num > 100) {
            printf("Muy frio\n");
        } else if (random - num <= 100 && random - num > 10) {
            printf("Frio\n");
        } else if (random - num <= 10 && random - num > 5) {
            printf("Caliente\n");
        } else if (random - num <= 5) {
            printf("Muy caliente\n");
        }
    } while (num != random);
    return 0;
}