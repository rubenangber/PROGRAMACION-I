#include <stdlib.h>
#include <stdio.h>

int main(){
    int fechanac, u_millar, cent, dec, uni, temp, suma;
    int anio, mes, dia, num_tarot;

    printf("Introduce tu fecha de nacimiento (AAAAMMDD) >> ");
    scanf("%d", &fechanac);

    anio = fechanac / 10000;
    temp = fechanac % 10000;
    mes = temp / 100;
    dia = temp % 100;

    suma = anio + mes + dia;

    u_millar = suma / 1000;
    temp = suma % 1000;
    cent = temp / 100;
    temp = temp % 100;
    dec = temp / 10;
    uni = temp % 10;

    num_tarot = u_millar + cent + dec + uni;

    printf("\nFecha de nacimiento >> %d\n",fechanac);
    printf("%d + %d + %d = %d\n",anio, mes, dia, suma);
    printf("Numero del Tarot >> %d\n",num_tarot);

    return 0;
}
