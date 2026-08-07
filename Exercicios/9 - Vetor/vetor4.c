#include <stdio.h>
#define TAM 20

int main(int argc, char **argv)
{
	float nota[TAM], media, soma = 0;
	int i, acimadamedia = 0;
	
	for(i = 0; i <TAM; i++){
		printf("Digite a nota do aluno %d: ",i + 1);
		scanf("%f", &nota[i]);
		
		soma += nota[i];
	}
	
		media = soma / 20;
		
	for(i = 0; i <TAM; i++){
		if(nota[i] > media){
			acimadamedia++;
		}
	}
			
	printf("\nMedia da turma: %.2f\n", media);
    printf("Quantidade de alunos acima da media: %d\n", acimadamedia);
    
	return 0;
}

