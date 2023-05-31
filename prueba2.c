#include <stdio.h>
#include <stdlib.h>
#define NUM 100

int main(int argc, char const *argv[]) {
    int cont = 0;

    for (int i = 0; i < NUM; i++) {
        if (cont % 15 == 0 && cont != 0) {
            printf("Entre 15\n");
        } else if (cont % 5 == 0 && cont != 0) {
            printf("Entre 5\n");
        } else if (cont % 3 == 0 && cont != 0) {
            printf("Entre 3\n");
        } else {
            printf("%d\n", cont);
        }
        cont++;
    }

    return 0;
}
