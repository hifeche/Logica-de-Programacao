#include <stdio.h>
#define TAM 10

int main(int argc, char **argv)
{
	int vetorA[TAM], vetorB[TAM], i, n;
	int produto = 0;
	
	do{
		printf("Informe o tamanho do vetor; ");
		scanf("%d", &n);
	}while(n > TAM);
	
	for(i=0; i<n; i++){
		printf("Digite o valor de vetorA[%d]: ",i);
		scanf("%d", &vetorA[i]);
	}
	
	printf("\n");
	
	for(i=0; i<n; i++){
		printf("Digite o valor de vetorB[%d]: ",i);
		scanf("%d", &vetorB[i]);
	}
	for(i=0; i<n; i++){
        produto += vetorA[i] * vetorB[i];
    }
    
    printf("\n");

    printf("Produto escalar = %d\n", produto);

		
	return 0;
}
