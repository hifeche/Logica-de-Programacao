#include <stdio.h>
#define TAM 3

int main(int argc, char **argv)
{
	int matriz[TAM][TAM];
    int i, j;

    int maior, menor;
    int linMaior, colMaior, linMenor, colMenor;

    // Leitura da matriz
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = menor = matriz[0][0];
    linMaior = linMenor = 0;
    colMaior = colMenor = 0;

    // Busca maior e menor
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {

            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linMaior = i;
                colMaior = j;
            }

            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
                linMenor = i;
                colMenor = j;
            }
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Posicao: [%d][%d]\n", linMaior, colMaior);

    printf("\nMenor valor: %d\n", menor);
    printf("Posicao: [%d][%d]\n", linMenor, colMenor);

	return 0;
}

