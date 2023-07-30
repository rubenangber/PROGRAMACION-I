#include <stdio.h>
#include <stdlib.h>
#define FIL 3
#define COL 4
#define DIM 10

int main() {
    char vletras[] = {'A', 'F', 'H', 'K', 'L', 'O', 'S', 'U', 'X', 'Z', '\0'};
    char iUsuario[FIL][COL];
    char *map[FIL][COL];
    int i, j, k, salir;

    for (i = 0; i < FIL; i++) {
        for (j = 0; j < COL; j++) {
            salir = 0;
            printf("Introduzca carácter [%d][%d] >> ", i + 1, j + 1);
            scanf(" %c", &iUsuario[i][j]);

            for (k = 0; k < DIM; k++) {
                if (iUsuario[i][j] == vletras[k]) {
                    map[i][j] = &vletras[k];
                    salir = 1;
                } else if (iUsuario[i][j] != vletras[k] && salir == 0) {
                    map[i][j] = NULL;
                }
            }
        }
    }

    printf("Resultado\n");
    for (i = 0; i < FIL; i++) {
        for (j = 0; j < COL; j++) {
            if (map[i][j] == NULL) {
                printf(" * ");
            } else {
                printf(" %c ", *map[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}