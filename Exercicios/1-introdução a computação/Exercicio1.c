#include <stdio.h>

int main(){
	//declaração de variáveis
	int valorA, valorB, soma, sub, mult;
	float div;
	//entrada
	printf("Programa para calcular as 4 operações básicas\n");
	printf("Digite o valor de A: ");
	scanf("%d", &valorA);
	printf("Digite o valor de B: ");
	scanf("%d", &valorB);
	//processamento
	soma= valorA + valorB;
	sub= valorA - valorB;
	mult= valorA * valorB;
	div= (float) valorA / valorB;
	//saída
	printf("Soma = %d\n", soma);
	printf("Subtração = %d\n", sub);
	printf("Multiplicação = %d\n", mult);
	printf("Divisão = %d\n", div);
	return 0;
	}	
