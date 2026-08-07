#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1;
		
	while (i <= 10)
	{
		int quadrado = i*i;
		int cubo = i*i*i;
		
		printf("Numero: %d | Quadrado: %d | Cubo: %d\n", i, quadrado, cubo);
		
		i++;
	}
	
	return 0;
}

