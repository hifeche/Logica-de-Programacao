#include <stdio.h>

int main()
{
	 float valorPago, preco, troco;

    printf("Digite o valor pago: ");
    scanf("%f", &valorPago);

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    troco = valorPago - preco;

    printf("O valor do troco e: %.2f\n", troco);
    
	return 0;
}

