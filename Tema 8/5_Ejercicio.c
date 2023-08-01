#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define PUNTOS 15.0

void moduloPrincipal(void);
double seno(double);

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


void moduloPrincipal() {
    double limite1, limite2, incremento, x;
    
    printf("Introduzca limite inferior >> ");
    scanf("%lf", &limite1);

    do { 
        printf("Introduzca limite superior >> ");
        scanf("%lf", &limite2);
    } while (limite2 <= limite1);

    incremento = (limite2 - limite1) / PUNTOS;

    printf("   Valor x    seno(x)    sin(x)\n");
    for (x = limite1; x <= limite2; x+=incremento) {
	    printf("%10.6lf %10.6lf %10.6lf\n", x, seno(x), sin(x));
    }
}

double seno(double px) {
    const int MAXTERMINOS = 20;
    double termino, suma = 0;
    int nterm, i;
     
    i = nterm = 1;
    termino = px;
    suma = px;

    while (nterm < MAXTERMINOS) {
        i += 2;
        termino = - ( (px * px) / (i * (i - 1))) * termino;
        suma = suma + termino;
        nterm = nterm + 1;
    }
    
    return suma;
}