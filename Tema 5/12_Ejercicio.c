#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int dim, num, i;
    float m_aritmetica, m_cuadratica;
    double m_geometrica;

    m_aritmetica = 0;
    m_geometrica = 1;
    m_cuadratica = 0;

    printf("Introduce la dimension >> ");
    scanf("%d", &dim);

    for (i = 0; i < dim; i++) {
        do {
            printf("Introducir numero %d >> ", i + 1);
            scanf("%d", &num);
        } while (num < 0);
        m_aritmetica = m_aritmetica + num;
        m_geometrica = m_geometrica * num;
        m_cuadratica = m_cuadratica + (num * num);
    }

    m_aritmetica = m_aritmetica / dim;

    m_geometrica = pow(m_geometrica, (1 / dim));

    m_cuadratica = m_cuadratica / dim;
    m_cuadratica = sqrt(m_cuadratica);

    printf("Media aritmetica >> %f\n", m_aritmetica);
    printf("Media geometrica >> %f\n", m_geometrica);
    printf("Media cuadratica simple >> %f\n", m_cuadratica);

    return 0;
}
