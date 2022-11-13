#include <stdio.h>
#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main(){
	int grados;
	float radianes;
	
	printf("Introduce los grados >> ");
	scanf("%d", &grados);
	
	radianes = (PI / 180) * grados;
	
	printf("\nGrados >> %d\n",grados);
	printf("Radianes >> %f\n",radianes);
	printf("Seno >> %f\n",sin(radianes));
	printf("Coseno >> %f\n",cos(radianes));
	
    return 0;
}