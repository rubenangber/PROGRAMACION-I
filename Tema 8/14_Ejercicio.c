#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define FIL 25
#define COL 25

void moduloPrincipal(void);
void leerMatriz(long (*)[COL], int, int);
void escribirMatriz (long (*)[COL], int, int);
void productoMatriz (long (*)[COL], int, int, long (*)[COL], int, long (*)[COL]);

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
     long matrizA[FIL][COL], matrizB[FIL][COL], matrizP[FIL][COL];
     int filA, colA, filB, colB, filP, colP;
     int f, c, j;
   
    do { 
        printf("Introduce las filas de la matriz A >> ");
        scanf("%d", &filA);
    } while ((filA <=0) || (filA > FIL));
   
    do { 
        printf("Introduce las columnas de la matriz A >> ");
        scanf("%d", &colA);
    } while ((colA <=0) || (colA > COL));
    
    filB = colA;
   
    do { 
        printf("Introduce las columnas de la matriz B >> ");
        scanf("%d", &colB);
    } while ((colB <=0) || (colB > COL));
   
   
    printf("Introduzca la matriz A:\n");
    leerMatriz(matrizA, filA, colA);
   
    printf("Introduzca la matriz B:\n");
    leerMatriz(matrizB, filB, colB);
   
    filP = filA;
    colP = colB;

    productoMatriz (matrizA, filA, colA, matrizB, colB, matrizP);
   
    printf("Matriz A\n");
    escribirMatriz(matrizA, filA, colA);
    printf("Matriz B\n");
    escribirMatriz(matrizB, filB, colB);
    printf("Matriz producto\n");
    escribirMatriz(matrizP, filP, colP);
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

void productoMatriz(long (*ma)[COL], int f_a, int c_a, long (*mb)[COL], int c_b, long (*mp)[COL]) {
    int i, j, k;
    
    for (i = 0; i < f_a; i++){
        for (j = 0; j < c_b; j++) {
            mp[i][j] = 0;
            for (k = 0; k < c_a; k++) {
                mp[i][j] = mp[i][j] + (ma[i][k] * mb[k][j]);
            }
        }
    }
}
