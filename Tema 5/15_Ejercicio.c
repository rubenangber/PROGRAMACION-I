#include <stdio.h>
#include <stdlib.h>
#define NOTAMIN 0.0
#define NOTAMAX 10.0

int main() {
    float nota;
    float cuantos = 0, c_sobre = 0, c_not = 0, c_ap = 0, c_sus = 0, c_def = 0;
    float por_sobre = 0, por_not = 0, por_ap = 0, por_sus = 0, por_def = 0, media = 0;

    printf("Introduce una nota >> ");
    scanf("%f", &nota);

    while (nota >= NOTAMIN && nota <= NOTAMAX) {
        cuantos++;
        media = media + nota;

        if (nota >= 9) {
            c_sobre++;
        } else if (nota < 9 && nota >= 7) {
            c_not++;
        }else if (nota < 7 && nota >= 5) {
            c_ap++;
        } else if (nota < 5 && nota >= 2) {
            c_sus++;
        } else if (nota < 2) {
            c_def++;
        }

        printf("Introduce una nota >> ");
        scanf("%f", &nota);
    }

    media = media / cuantos;
    por_sobre = (c_sobre / cuantos) * 100.0;
    por_not = (c_not / cuantos) * 100.0;
    por_ap = (c_ap / cuantos) * 100.0;
    por_sus = (c_sus / cuantos) * 100.0;
    por_def = (c_def / cuantos) * 100.0;

    if (media >= 5.0) {
        printf("Total alumnos presentados a examen >> %.0f\n", cuantos);
        printf("Numero de sobresalientes >> %.0f (%.2f%%)\n", c_sobre, por_sobre);
        printf("Numero de notables >> %.0f (%.2f%%)\n",c_not, por_not);
        printf("Numero de aprobados >> %.0f (%.2f%%)\n", c_ap, por_ap);
        printf("Numero de suspensos >> %.0f (%.2f%%)\n", c_sus, por_sus);
        printf("Numero de muy deficientes >> %.0f (%.2f%%)\n", c_def, por_def);
        printf("Nota media >> %.0f (Aprobado)\n", media);
    } else {
        printf("Total alumnos presentados a examen >> %.0f\n", cuantos);
        printf("Numero de sobresalientes >> %.0f (%.2f%%)\n", c_sobre, por_sobre);
        printf("Numero de notables >> %.0f (%.2f%%)\n",c_not, por_not);
        printf("Numero de aprobados >> %.0f (%.2f%%)\n", c_ap, por_ap);
        printf("Numero de suspensos >> %.0f (%.2f%%)\n", c_sus, por_sus);
        printf("Numero de muy deficientes >> %.0f (%.2f%%)\n", c_def, por_def);
        printf("Nota media >> %.0f (Suspenso)\n", media);
    }

    return 0;
}