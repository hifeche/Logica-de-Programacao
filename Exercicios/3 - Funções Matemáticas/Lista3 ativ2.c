#include <stdio.h>
#include <math.h>

int main()
{
	int num;
    double quadrado, cubo;

    printf("Digite um numero: ");
    scanf("%d", &num);

    quadrado = pow(num, 2); 
    cubo = pow(num, 3);     

    printf("numero\tquadrado\tcubo\n");
    printf("%d\t%.0f\t\t%.0f\n", num, quadrado, cubo);
	
	return 0;
}

