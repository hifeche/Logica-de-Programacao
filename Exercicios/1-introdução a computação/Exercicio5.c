#include <stdio.h>

int main()
{
	float comprimento, largura, preço_m2;
	float area, custo_total;
	printf("Digite o comprimento da sala (em metros): ");
	scanf("%f", &comprimento);
	
	printf("Digite a largura da sala (em metros): ");
	scanf("%f", &largura);
	
	printf("Digite o preço do metro quadrado do carpete: ");
	scanf("%f", &preço_m2);
	
	area= comprimento * largura;
	custo_total= area * preço_m2;
	
	printf("Area da sala, %.2f m2\n", custo_total);
	printf("Custo total do carpete: R$ %.2f\n", custo_total);
	
	return 0;
}

