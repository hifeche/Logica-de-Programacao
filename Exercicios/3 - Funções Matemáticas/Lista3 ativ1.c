#include <stdio.h>
#include <math.h>
int main()
{
	double num, raiz;
	printf("Informe o valor para calcular a raiz quadrada: ");
	scanf("%lf", &num);
	raiz = sqrt(num);
	printf("Resultado = %.0f", raiz);
	
	return 0;
}

