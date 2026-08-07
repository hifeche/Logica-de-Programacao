#include <stdio.h>
#include <math.h>

int main()
{
	float valor, prestacao;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	
	prestacao = valor / 5;
	
	printf("\nCompra parcelada\n");
	printf("5 x %.2f = %.2f\n", prestacao, valor);
	
	return 0;
}

