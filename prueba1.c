#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int i, num;
    float ant = 0, desp = 1, sum = 0;

    printf("Introduzca el numero de interacciones >> ");
    scanf("%d", &num);

    for(i = 0; i < num; i++) {
        sum = ant + desp;
        ant = desp;
        desp = sum;
        printf("%.0f\n", sum);
    }

    return 0;
}
