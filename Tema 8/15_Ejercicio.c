#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define FIL 25
#define COL 25

void moduloPrincipal(void);
void leerMatriz(long (*)[COL], int, int);
void escribirMatriz(long (*)[COL], int, int);
void puntodesilla(long (*)[COL], int, int, int *, int *);

int main() {
    char respuesta; 
     
    do {
        moduloPrincipal();
        printf("\n"); 

        do { 
            printf("Quieres otra ejecucion >> ");
            scanf(" %c", &respuesta);
            respuesta = toupper(respuesta);
        } while (respuesta != 'S' && respuesta != 'N');  

    } while (respuesta != 'N');

    return 0;
}

void moduloPrincipal(void) {
    long matrizA[FIL][COL];
    int filA, colA, ps_f, ps_c;

    do {
        printf("Introduce las filas de la matriz >> ");
        scanf("%d", &filA);
    } while ((filA <=0) || (filA > FIL));
   
    do { 
        printf("Introduce las columnas de la matriz >> ");
        scanf("%d", &colA);
    } while ((colA <=0) || (colA > COL));
   
    leerMatriz(matrizA, filA, colA);
   
    puntodesilla (matrizA, filA, colA, &ps_f, &ps_c);
   
    escribirMatriz(matrizA, filA, colA);
   
    if (ps_f != -1 && ps_c != -1) {
          printf("Punto de silla en elemento [%d][%d] con valor >> %ld\n", ps_f + 1, ps_c + 1, matrizA[ps_f][ps_c]);
    } else {
        printf("La matriz no tiene puntos de silla\n");
    }
}

void puntodesilla(long (*ma)[COL], int filas, int columnas, int *ff, int *cc) {
    int f, f2, c, menorf, cm, flag_ps;

    *ff = *cc = -1;
   
    for (f = 0; f < filas && (*ff == -1 && *cc == -1); f++) {
        menorf = ma[f][0];
        cm = 0; 
        for (c = 1; c < columnas; c++){
            if (menorf > ma[f][c]) { 
                menorf = ma[f][c];
                cm = c; 
            }
        }

        flag_ps = 1;
        f2 = 0;
        while (flag_ps && f2 < filas) {
            flag_ps = menorf >= ma[f2][cm];
            f2++;
        }
   
        if (flag_ps) {
            *ff = f;
            *cc = cm;
        }   
    }
}

void leerMatriz(long (*ma)[COL], int filas, int columnas) {
    int i, j;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Elemento[%d][%d]", i + 1, j + 1);
   	        scanf("%ld", &ma[i][j]);
        }
    }
}

void escribirMatriz(long (*ma)[COL], int filas, int columnas) {
    int i, j;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%ld ", ma[i][j]);
        }
        printf("\n");
    }
}