#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXTEXTO 100

int main() {
    char texto [MAXTEXTO + 1];
    int  estadistica [256] = {0};
    int  longtexto = 0;
    int i;
    char  terminar;

    do {
        printf("\nIntroduzca un texto (max >> %d caracteres) >> ", MAXTEXTO);
        fflush(stdin);
        gets(texto);   

        longtexto = 0;
        for (i = 0; i < 256; i++) {
            estadistica[i] = 0;
        }

        i = 0;
        while (texto[i] != '\0') { 
            longtexto++;
            estadistica[(unsigned char) texto[i]]++;
            i++;
        }
        
        printf("Longitud del texto >> %d\n", longtexto);
    
        for (i = 0; i < 256; i++) {
            if (estadistica[i] != 0) {
                printf("%4c%11d%16d%16.2f\n",i, i, estadistica[i], (estadistica[i] * 100.0) / longtexto);
            }
        }
      
        do { 
            printf("Quieres salir del programa (S/N) >> ");
            scanf(" %c", &terminar);
            terminar = toupper(terminar);
        } while (terminar != 'S' && terminar != 'N'); 

    } while (terminar != 'S');  
    
    return 0;
}
