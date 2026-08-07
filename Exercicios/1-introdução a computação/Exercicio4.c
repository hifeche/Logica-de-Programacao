#include <stdio.h>

int main()
{
	float distancia, combustivel, consumo;
	printf("Digite a distancia percorrida (km): ");
	scanf("%f", &distancia);
	
	printf("Digite o combustivel gasto (litros): ");
    scanf("%f", &combustivel);
	
	consumo= distancia / combustivel;
	
	printf("Consumo medio: %.2f km/l\n", consumo);
	
	return 0;
}

