#include <stdio.h>

// Função que verifica a quantidade de raízes reais
int quantidadeRaizes(float a, float b, float c)
{
	// Calcula o delta
	float delta = (b * b) - (4 * a * c);

	// Se delta for positivo, existem 2 raízes reais
	if(delta > 0)
		return 2;

	// Se delta for igual a zero, existe 1 raiz real
	else if(delta == 0)
		return 1;

	// Se delta for negativo, não existem raízes reais
	else
		return 0;
}

int main()
{
	float a, b, c;

	// Recebe os coeficientes da equação
	printf("Digite A, B e C: ");
	scanf("%f %f %f", &a, &b, &c);

	// Mostra a quantidade de raízes
	printf("Quantidade de raizes reais: %d",
	       quantidadeRaizes(a,b,c));

	return 0;
}