#include <stdio.h>
#define TAM 20

int main(int argc, char **argv)
{
	int v[TAM], i, menor=0, posMenor;
	
	for(i = 0; i <TAM; i++) {
		printf("Digite o valor de v[%d]: ",i);
		scanf("%d", &v[i]);
		
		if (i == 0 || v[i] < menor){
			menor = v[i];
			posMenor = i;
		}
	}
	printf("O menor elemento é %d que esta na posição %d\n", menor, posMenor);
		
	return 0;
}

