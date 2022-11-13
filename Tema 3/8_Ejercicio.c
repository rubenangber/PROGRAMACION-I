#include <stdio.h>
#include <stdio.h>

int main(){
	int num, u_millar, cent, decenas, unidades, temp;
	
	do {
		printf("Introduce el numero >> ");
		scanf("%d", &num);
	} while(num < 0 || num > 9999);
	
	u_millar = num / 1000;
	temp = num % 1000;
	cent = temp / 100;
	temp = temp % 100;
	decenas = temp / 10;
	unidades = temp % 10;
	
	printf("\nNumero introducido >> %d\n",num);
	printf("Unidades de millar >> %d\n",u_millar);
	printf("Centenas >> %d\n",cent);
	printf("Decenas >> %d\n",decenas);
	printf("Unidades >> %d\n",unidades);
	
    return 0;
}