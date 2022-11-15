#include <stdio.h>
#include <stdio.h>

int main(){
	int hora1, min1, seg1, tiempo1;
	int hora2, min2, seg2, tiempo2;
	int horaf, minf, segf, tiempof;
	int temp;
	
	printf("Introduce las horas del primer corredor >> ");
	scanf("%d", &hora1);
	printf("Introduce los minutos del primer corredor >> ");
	scanf("%d", &min1);
	printf("Introduce los segundos del primer corredor >> ");
	scanf("%d", &seg1);
	printf("Introduce las horas del segundo corredor >> ");
	scanf("%d", &hora2);
	printf("Introduce los minutos del segundo corredor >> ");
	scanf("%d", &min2);
	printf("Introduce los segundos del segundo corredor >> ");
	scanf("%d", &seg2);
	
	tiempo1 = hora1 * 60 * 60 + min1 * 60 + seg1;
	tiempo2 = hora2 * 60 * 60 + min2 * 60 + seg2;
	tiempof = tiempo1 - tiempo2;
	segf = tiempof % 60;
	temp = tiempof / 60;
	minf = temp % 60;
	horaf = temp / 60;
	
	printf("\nPrimer corredor\n");
	printf("Horas >> %d\n",hora1);
	printf("Minutos >> %d\n",min1);
	printf("Segundos >> %d\n",seg1);
	printf("\nSegundo corredor\n");
	printf("Horas >> %d\n",hora2);
	printf("Minutos >> %d\n",min2);
	printf("Segundos >> %d\n",seg2);
	printf("\nDiferencia de tiempo\n");
	printf("Horas >> %d\n",horaf);
	printf("Minutos >> %d\n",minf);
	printf("Segundos >> %d\n",segf);
	
    return 0;
}