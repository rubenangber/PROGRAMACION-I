#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int num, millar, centena, decena, unidad, resto;
    char cadena[25];

    do {
        printf("Introduzca un numero entre 1 y 3000 >> ");
        scanf("%d", &num);

        if(num < 1 || num > 3000){
            printf("Numero introducido incorrecto\n\n\n");
        }
    } while(num < 1 || num > 3000);

    millar = millar / 1000;
    resto = millar % 1000;
    centena = resto / 100;
    resto = centena % 100;
    decena = resto / 10;
    unidad = resto % 10;

    switch (millar) {
        case 1:
            strcat(cadena, "M");
        break;

        case 2:
            strcat(cadena, "MM");
        break;
    
        case 3:
            strcat(cadena, "MMM");
        break;
    }

    switch (centena) {
        case 1:
            strcat(cadena, "C");
        break;

        case 2:
            strcat(cadena, "CC");
        break;
    
        case 3:
            strcat(cadena, "CCC");
        break;

        case 4:
            strcat(cadena, "CD");
        break;

        case 5:
            strcat(cadena, "D");
        break;
    
        case 6:
            strcat(cadena, "DC");
        break;

        case 7:
            strcat(cadena, "DCC");
        break;

        case 8:
            strcat(cadena, "DCCC");
        break;
    
        case 9:
            strcat(cadena, "CM");
        break;
    }

    switch (decena) {
        case 1:
            strcat(cadena, "X");
        break;

        case 2:
            strcat(cadena, "XX");
        break;
    
        case 3:
            strcat(cadena, "XXX");
        break;

        case 4:
            strcat(cadena, "XL");
        break;

        case 5:
            strcat(cadena, "L");
        break;
    
        case 6:
            strcat(cadena, "LX");
        break;

        case 7:
            strcat(cadena, "LXX");
        break;

        case 8:
            strcat(cadena, "LXXX");
        break;
    
        case 9:
            strcat(cadena, "XC");
        break;
    }

    switch (unidad) {
        case 1:
            strcat(cadena, "I");
        break;

        case 2:
            strcat(cadena, "II");
        break;
    
        case 3:
            strcat(cadena, "III");
        break;

        case 4:
            strcat(cadena, "IV");
        break;

        case 5:
            strcat(cadena, "V");
        break;
    
        case 6:
            strcat(cadena, "VI");
        break;

        case 7:
            strcat(cadena, "VII");
        break;

        case 8:
            strcat(cadena, "VIII");
        break;
    
        case 9:
            strcat(cadena, "IX");
        break;
    }

    printf("El numero %d es >> %s\n", num, cadena);

    return 0;
}
