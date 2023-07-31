#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void sumartiempo(int *, int *, int *, int);
void moduloPrincipal(void);
void presentacion(void);

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
    int horas, minutos, segundos, incremento;

    printf("Introduzca las horas >> ");
    scanf("%d", &horas);
    printf("Introduzca los minutos >> ");
    scanf("%d", &minutos);
    printf("Introduzca los segundos >> ");
    scanf("%d", &segundos);

    printf("Introduzca el incremento de tiempo en segundos >> ");
    scanf("%d", &incremento);
   
    sumartiempo (&horas, &minutos, &segundos, incremento);
   
    printf("Horas >> %d\nMinutos >> %d\nSegundos >> %d\n", horas, minutos, segundos);
}

void sumartiempo(int *h, int *m, int *s, int incr) {
    int min;
    int hor;
                                          
    *s = *s + incr;
   
    min = *s / 60;
    *s  = *s % 60;
    *m  = *m + min;
   
    hor = *m / 60;
    *m  = *m % 60;
    *h  = *h + hor;
}