#include <stdio.h>
#include <stdlib.h>

int main() {
    long double num = 52.75;
    float tab[] = {1.5, 2.5, 3.5};
    long double *p = &num;
    char msg[] = "HOLA";

    printf("\tDireccion\tTamanio\tValor\n");
    printf("num\t%p\t%ld\t%.2Lf\n", &num, sizeof(num), num);
    printf("tab[2]\t%p\t%ld\t%.2f\n", &tab[2], sizeof(tab[2]), tab[2]);
    printf("tab[1]\t%p\t%ld\t%.2f\n", &tab[1], sizeof(tab[1]), tab[1]);
    printf("tab[0]\t%p\t%ld\t%.2f\n", &tab[0], sizeof(tab[0]), tab[0]);
    printf("p\t%p\t%ld\t%p\n", &p, sizeof(p), p);
    printf("msg[4]\t%p\t%ld\t%c\n", &msg[4], sizeof(msg[4]), msg[4]);
    printf("msg[3]\t%p\t%ld\t%c\n", &msg[3], sizeof(msg[3]), msg[3]);
    printf("msg[2]\t%p\t%ld\t%c\n", &msg[2], sizeof(msg[2]), msg[2]);
    printf("msg[1]\t%p\t%ld\t%c\n", &msg[1], sizeof(msg[1]), msg[1]);
    printf("msg[0]\t%p\t%ld\t%c\n", &msg[0], sizeof(msg[0]), msg[0]);

    return 0;
}