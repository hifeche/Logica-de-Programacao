#include <stdio.h>

int main()
{
	float base, altura, area;
	
	printf("Digite a base do retengulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do retangulo: ");
	scanf("%f", &altura);
	
	printf("Digite a area do retangulo: ");
	scanf("%f", &area);
	
	area = base * altura;
	
	printf("A area do retangulo e: %.0f\n", area);
	
	return 0;
}

