#include <stdio.h>
#include <stdlib.h>

int main() {
    float densidad_ini, tasa_crec, dens_ini_dia, incremento, dens_total;
    int dias_cultivo, dia, cont_dias;
                      
    do {   
        printf("Densidad inicial >> ");
        scanf("%f", &densidad_ini);
        if (densidad_ini <= 0) {
            printf("La densidad debe ser mayor que cero\n");
        }
    } while (densidad_ini <= 0);

    do {   
        printf("Tasa de crecimiento diaria >> ");
        scanf("%f", &tasa_crec);
        if  (tasa_crec <= 0) {
            printf("La tasa de crecimiento debe ser mayor que cero\n");
        }
    } while (tasa_crec <= 0);
    
    do {   
        printf("Dias a mantener el cultivo >> ");
        scanf("%d", &dias_cultivo);
        if  (dias_cultivo <= 0) {
            printf("El numero de dias debe ser mayor que cero\n");
        }
    } while (dias_cultivo <= 0);

    dens_total = densidad_ini;
    
    printf("\n");
    printf("Dia | Dens. comienzo dia | Incr. dia | Dens. fin dia \n");

    for (dia = 1; dia <= dias_cultivo; dia++) {
        dens_ini_dia = dens_total;
        incremento = dens_total * (tasa_crec / 100);
        dens_total += incremento;
        printf("%3d |     %9.3f      | %9.3f |   %9.3f\n", dia, dens_ini_dia, incremento, dens_total);
    }
    
    printf("\n");
    printf("La densidad total al cabo de %d dias es de >> %.3f\n", dias_cultivo, dens_total);

    cont_dias = 0;
    dens_total = densidad_ini;

    do {  
        cont_dias++;
        incremento = dens_total * (tasa_crec / 100);
        dens_total += incremento;
    } while (dens_total < densidad_ini * 2);

    printf("La densidad inicial se duplica al cabo de >> %d dias\n", cont_dias);

    return 0;
}
