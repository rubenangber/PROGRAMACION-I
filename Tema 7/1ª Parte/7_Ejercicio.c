#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int *p_num;

    printf("Introduce un numero >> ");
    scanf("%d", &num);

    printf("El valor de num es >> %d\n", num);

    p_num = &num;

    printf("El valor de num (desde p_num) es >> %d\n", *p_num);

    printf("Introduce un numero para num (desde p_num) >> ");
    scanf("%d", p_num);

    printf("El valor de de num es >> %d\n", num);

    printf("El valor de num (desde p_num) es >> %d\n", *p_num);

    printf("La direccion de num es >> %p\n", &num);

    printf("La direccion de num (desde p_num) es >> %p\n", p_num);

    printf("La dirección de p_num es >> %p\n", &p_num);

    printf("El valor de p_num es >> %d\n", *p_num);

    return 0;
}