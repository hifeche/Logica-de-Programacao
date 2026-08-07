#include <stdio.h>
#define TAM 10

int main(int argc, char **argv)
{
	int v1[TAM], v2[TAM];
	int i;
	
    for(i = 0; i < TAM; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &v1[i]);			/* Leitura dos números */
    }

    for(i = 0; i < TAM; i++)
    {
        v2[i] = v1[TAM - 1 - i];		/* Copiando em ordem inversa */
    }

    printf("\nVetor invertido:\n");

    for(i = 0; i < TAM; i++)
    {
        printf("%d ", v2[i]);			/* Exibindo invertido */
    }
	
	return 0;
}

