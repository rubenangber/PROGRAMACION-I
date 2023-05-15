#include <stdlib.h>
#include <stdio.h>

int main() {
    int num, unidades, decenas, centenas;

    printf("Ingrese un numero entre 0 y 999 >> ");
    scanf("%d", &num);

    unidades = num % 10;
    decenas = (num / 10) % 10;
    centenas = (num / 100) % 10;

    printf("%d >> ", num);

    if (centenas > 0) {
        switch (centenas) {
            case 1:
                printf("ciento ");
            break;
            case 2:
                printf("doscientos ");
            break;
            case 3:
                printf("trescientos ");
            break;
            case 4:
                printf("cuatrocientos ");
            break;
            case 5:
                printf("quinientos ");
            break;
            case 6:
                printf("seiscientos ");
            break;
            case 7:
                printf("setecientos ");
            break;
            case 8:
                printf("ochocientos ");
            break;
            case 9:
                printf("novecientos ");
            break;
        }
    }

    if (decenas == 1) {
        switch (unidades) {
            case 0:
                printf("diez\n");
            break;
            case 1:
                printf("once\n");
            break;
            case 2:
                printf("doce\n");
            break;
            case 3:
                printf("trece\n");
            break;
            case 4:
                printf("catorce\n");
            break;
            case 5:
                printf("quince\n");
                break;
            case 6:
                printf("dieciséis\n");
                break;
            case 7:
                printf("diecisiete\n");
            break;
            case 8:
                printf("dieciocho\n");
            break;
            case 9:
                printf("diecinueve\n");
            break;
        }
    } else {
        switch (decenas) {
            case 2:
                printf("veinte");
            break;
            case 3:
                printf("treinta");
            break;
            case 4:
                printf("cuarenta");
            break;
            case 5:
                printf("cincuenta");
            break;
            case 6:
                printf("sesenta");
            break;
            case 7:
                printf("setenta");
            break;
            case 8:
                printf("ochenta");
            break;
            case 9:
                printf("noventa");
            break;
        }

        if (decenas > 2 && unidades > 0) {
            printf(" y ");
        }

        if (decenas != 1 && unidades > 0) {
            switch (unidades) {
                case 1:
                    printf("uno\n");
                break;
                case 2:
                    printf("dos\n");
                break;
                case 3:
                    printf("tres\n");
                break;
                case 4:
                    printf("cuatro\n");
                break;
                case 5:
                    printf("cinco\n");
                break;
                case 6:
                    printf("seis\n");
                break;
                case 7:
                    printf("siete\n");
                break;
                case 8:
                    printf("ocho\n");
                break;
                case 9:
                    printf("nueve\n");
                break;
            }
        }
    }

    return 0;
}