#include <stdio.h>

int main(int argc, char **argv)
{
	int mes, ano;
		printf("Informe o mes do ano: ");
		scanf("%d", &mes);
	switch (mes)
	{
	case 1:
		printf("31 dias");
		break;
	case 2:
		printf("Informe o ano:\n");
		scanf ("%d", &ano);
		
		if ((ano % 4 == 0 && ano % 100 !=0) || (ano % 400 == 0)){
			printf("29 dias");
			}
			else
			printf("28 dias");
		break;
	case 3:
		printf("31 dias");
		break;
	case 4:
		printf("30 dias");
		break;
	case 5:
		printf("31 dias");
		break;
	case 6:
		printf("30 dias");
		break;
	case 7:
		printf("31 dias");
		break;
	case 8:
		printf("31 dias");
		break;
	case 9:
		printf("30 dias");
		break;
	case 10:
		printf("31 dias");
		break;
	case 11:
		printf("30 dias");
		break;
	case 12:
		printf("31 dias");
		break;
		
	}
	
	return 0;
}

