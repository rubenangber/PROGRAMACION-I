#include <stdio.h>
#include <stdlib.h>
#define DIM 7
#define FIL 3
#define COL 4

int main() {
    int vector[DIM];  
    int tabla[FIL][COL];                
    int i, j, *ptrV, *ptrT = *tabla;;

    for (i = 0; i < DIM; i++) {
        printf("Vector[%d] >> ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (i = 0; i < FIL; i++) {
        for (j = 0; j < COL; j++) {
            printf("Matriz[%d][%d] >> ", i + 1, j + 1);
            scanf("%d", &tabla[i][j]);
        }
    }

    printf("Vector con índice\n");
    for (i = 0; i < DIM; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    printf("Vector con puntero\n");
    for (i = 0; i < DIM; i++) {
        printf("%d ", *(vector + i));
    }
    printf("\n"); 

    printf("Variable puntero\n");
    ptrV = vector;
    for (i = 0; i < DIM; i++) {
       printf("%d ", *ptrV);
       *ptrV++ = i;
    }
    printf("\n");

    printf("Matriz con indices\n");
    for (i = 0; i < FIL; i++) {
       for (j = 0; j < COL; j++) {
          printf("%d ", tabla[i][j]);
       }
       printf("\n");
    }  
   
    printf("Matriz como puntero\n");
    for (i = 0; i < FIL; i++) {
       for (j = 0; j < COL; j++) {
          printf("%d ", *(*(tabla + i) + j));
       }
       printf("\n");
    }  

    printf("matriz como variable puntero\n");
    for (i = 0; i < FIL; i++) {
       for (j = 0; j < COL; j++) {
          printf("%d ", *(ptrT + i * COL + j));
       }
       printf("\n");
    }

    return 0;
}