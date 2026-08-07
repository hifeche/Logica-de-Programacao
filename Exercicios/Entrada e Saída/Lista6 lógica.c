#include <stdio.h>

int main()
{
	float valor, valorDesconto, valorAcrescimo;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);

    valorDesconto = valor * 0.90;
    valorAcrescimo = valor * 1.05;

    printf("Valor com 10%% de desconto: %.2f\n", valorDesconto);
    printf("Valor com 5%% de acrescimo: %.2f\n", valorAcrescimo);

	return 0;
}

