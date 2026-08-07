#include <stdio.h>
#include <math.h>

int main()
{
	int numero;
	int milhar, centena, dezena, unidade, soma;
	
	printf("Digite um numero inteiro de 4 digitos: ");
	scanf("%d", &numero);
	
	milhar = numero / 1000;
	centena = (numero % 1000) / 100;
	dezena = (numero % 100) / 10;
	unidade = numero % 10;
	
	soma = milhar + centena + dezena + unidade;
	
	printf("Soma dos digitos: %d\n", soma);
	
	return 0;
}

