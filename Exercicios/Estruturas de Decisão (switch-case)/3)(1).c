#include <stdio.h>

int main()
{
	int mes;
		printf("Digite um mes (1 a 12) do ano para saber o trimestre: ");
		scanf("%d", &mes);
	switch (mes)
	{
	case 1:
		printf ("Janeiro 1° trimestre");
		break;
	case 2:
		printf ("Fevereiro 1° trimestre");
		break;
	case 3:
		printf ("Março 1° trimestre");
		break;
	case 4:
		printf ("Abril 2° trimestre");
		break;
	case 5:
		printf ("Maio 2° trimestre");
		break;
	case 6:
		printf ("Junho 2° trimestre");
		break;
	case 7:
		printf ("Julho 3° trimestre");
		break;
	case 8:
		printf ("Agosto 3° trimestre");
		break;
	case 9:
		printf ("Setembro 3° trimestre");
		break;
	case 10:
		printf ("Outubro 4° trimestre");
		break;
	case 11:
		printf ("Novembro 4° trimestre");
		break;
	case 12:
		printf ("Dezembro 4° trimestre");
		break;
	default:
		printf ("Esse mes não existe.");

	}
		
	return 0;
}

