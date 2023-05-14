#include <stdio.h>
#include <stdlib.h>

int main() {
    char nombre[20];
    int dia, mes, anio, numIngresado;
    float costeDia, costeConsulta, costeMedicamento, costeDiverso, total, deduccionDiara, deduccionAyuda;

    printf("Introduzca nombre del paciente >> ");
    scanf("%s", nombre);
    fflush(stdin);
    printf("Introduzca dia de ingreso del paciente >> ");
    scanf("%d", dia);
    printf("Introduzca mes de ingreso del paciente >> ");
    scanf("%d", mes);
    printf("Introduzca anio de ingreso del paciente >> ");
    scanf("%d", anio);
    printf("Introduzca numero de dias de ingresado del paciente >> ");
    scanf("%d", numIngresado);
    printf("Introduzca el coste por dia >> ");
    scanf("%f", costeDia);
    printf("Introduzca el coste de la consulta >> ");
    scanf("%f", costeConsulta);
    printf("Introduzca el coste de los medicamentos >> ");
    scanf("%f", costeMedicamento);
    printf("Introduzca los costes diversos >> ");
    scanf("%f", costeDiverso);
    printf("Introduzca la deduccion diaria del seguro >> ");
    scanf("%f", deduccionDiara);
    printf("Introduzca la deduccion de ayuda de los medicamentos >> ");
    scanf("%f", deduccionAyuda);
    
    

    return 0;
}