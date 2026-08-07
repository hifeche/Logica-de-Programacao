#include <stdio.h>

int main()
{
	float total, comissao;
	printf("Qual foi o total de vendas?");
	scanf("%f", &total);
	
	
	comissao = total * 0.1;
	
	printf("Comissão do vendedor: %.2f\n", comissao);
	
	return 0;
}

