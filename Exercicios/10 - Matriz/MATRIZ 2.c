#include <stdio.h>
#define TAM 3

int main() {
    int matriz[TAM][TAM];
    int i, j, linha;

    // Leitura
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite a linha que deseja exibir (0 a 2): ");
    scanf("%d", &linha);

    printf("\nLinha %d:\n", linha);

    for(j = 0; j < TAM; j++) {
        printf("%d ", matriz[linha][j]);
    }

    return 0;
}
