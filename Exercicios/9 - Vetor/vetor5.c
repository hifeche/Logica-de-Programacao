#include <stdio.h>
#define TAM 20

int main(int argc, char **argv)
{
	int v[TAM], i, maior=0, posMaior;
	
	for(i = 0; i <TAM; i++) {
		printf("Digite o valor de v[%d]: ",i);
		scanf("%d", &v[i]);
		
		if (v[i] > maior){
			maior = v[i];
			posMaior = i;
		}
	}
	printf("O maior elemento é %d que esta na posição %d\n", maior, posMaior);
		
	return 0;
}

