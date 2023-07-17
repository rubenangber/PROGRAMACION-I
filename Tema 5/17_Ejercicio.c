#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia = 1;
    float m_inicial, decremento, m_final, mitad, porcentaje;

    printf("Introduce la masa inicial >> ");
    scanf("%f", &m_inicial);
    mitad = m_inicial / 2;

    printf("Introduce el porcentaje de desintegracion diario >> ");
    scanf("%f", &porcentaje);

    printf("Dia\tMasa inicial\tDecremento\tMasa final\n");
    do {
        decremento = m_inicial * (porcentaje / 100);
        m_final = m_inicial - decremento;
        printf("%d\t%f\t%f\t%f\n", dia, m_inicial, decremento, m_final);
        m_inicial = m_final;
        dia++;
    } while (m_inicial > mitad);

    return 0;
}