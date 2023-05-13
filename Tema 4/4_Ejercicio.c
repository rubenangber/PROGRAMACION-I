#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define EUR_HORA 43.27
#define HORAS_SEMANALES 40
#define PROC_A 10.0
#define PROC_B 20.0
#define LIMITE_IGUALDAD 90.0

int main() {
    int ord_vendidos;
    float precio_ord, cobro_op_a, cobro_op_b;

    printf("Introduce el precio del ordenador >> ");
    scanf("%f", &precio_ord);
    printf("Introduce los ordenadores vendidos >> ");
    scanf("%d", &ord_vendidos);

    cobro_op_a = EUR_HORA * HORAS_SEMANALES + ord_vendidos * (precio_ord / 100) * PROC_A;
    cobro_op_b = ord_vendidos * (precio_ord / 100) * PROC_B;

    if (abs(cobro_op_a - cobro_op_b) < LIMITE_IGUALDAD) {
        printf("Igual de ventajosos\n");
    } else {
        if (cobro_op_a < cobro_op_b) {
            printf("Opcion B\n");
        } else {
            printf("Opcion A\n");
        }
    }

    printf("Opcion A\tOpcion B\tDiferencia\n");
    printf("%.2f\t\t%.2f\t\t%.2f\n", cobro_op_a, cobro_op_b, cobro_op_a - cobro_op_b);

    return 0;
}