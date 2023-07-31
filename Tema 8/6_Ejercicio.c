#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void moduloPrincipal(void);
void descomponerEnDigitos(int, int *, int *, int *, int *);
char traduceDigito(int);
void presentaResultados(int, char *);

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
    char codigo[5] = "\0";
    int cantidad, unidad, decena, centena, millar, resto;

    do { 
        printf("Introduzca un numero >> ");
        scanf("%d", &cantidad);
    } while (cantidad <= 0 || cantidad > 9999);

    descomponerEnDigitos (cantidad, &unidad, &decena, &centena, &millar);

    codigo[0] = traduceDigito(millar);
    codigo[1] = traduceDigito(centena);
    codigo[2] = traduceDigito(decena);
    codigo[3] = traduceDigito(unidad);
    codigo[4] = '\0';

    presentaResultados (cantidad, codigo);
}

void descomponerEnDigitos(int cant, int *u, int *d, int *c, int *m) {
    int resto;

    *m = cant / 1000;
    resto = cant % 1000;

    *c = resto / 100;
    resto = resto % 100;

    *d = resto / 10;
    *u = resto % 10;
}

char traduceDigito(int dig) {
    char codigo;

    switch (dig) {
	    case  9 :
            codigo = 'M';
        break;

	    case  8 :
            codigo = 'U';
        break;

	    case  7 :
            codigo = 'R';
        break;

	    case  6 :
            codigo = 'C';
        break;

	    case  5 :
            codigo = 'I';
        break;

	    case  4 :
            codigo = 'E';
        break;

	    case  3 :
            codigo = 'L';
        break;

	    case  2 :
            codigo = 'A';
        break;

	    case  1 :
            codigo = 'G';
        break;

	    case  0 :
            codigo = 'O';
        break;

    }

    return (codigo);
}

void presentaResultados(int cant, char *cod) {
    printf("El numero >> %d codificado es >> %s\n", cant, cod);
}

