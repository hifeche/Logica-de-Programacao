#include <stdio.h>

int main()
{
	char veiculo;
		printf("Digite uma categoria da carteira de abiitacao: ");
		scanf("%c", &veiculo);
		switch (veiculo)
		{
		case 'A':
		case 'a':
			printf("Moto");
			break;
			
		case 'B':
		case 'b':
			printf("Carro");
			break;
		
		case 'C':
		case 'c':
			printf("Caminhao");
			break;
			
		case 'D':
		case 'd':
			printf("Onibus");
			break;
			
		case 'E':
		case 'e':
			printf("Carreta");
			break;
			
		default:
			printf("Essa categoria nao existe");
		}
	
	
	return 0;
}

