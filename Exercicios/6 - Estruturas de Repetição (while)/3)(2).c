#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0, soma = 0;
	
	while(i <= 100){
		if (i % 2 != 0){
			soma += i;
			}
			i++;
		}
	printf("Soma dos numeros ímpares: %d\n", soma);
	
	return 0;
}

