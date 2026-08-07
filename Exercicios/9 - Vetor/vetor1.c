#include <stdio.h>

int main(int argc, char **argv)
{
	int vetorA[5], vetorB[5], i;
	
	for(i=0; i<5; i++){
		printf("Digite o valor de vetorA[%d]: ", i);
		scanf("%d", &vetorA[i]);
	}
	for(i=0; i<5; i++){
		vetorB[i] = vetorA[i] * 2;
	}
	for(i=0; i<5; i++){
		printf("vetorB[%d] = %d\n", i, vetorB[i]);
	}
	return 0;
}

