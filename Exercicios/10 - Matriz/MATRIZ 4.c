#include <stdio.h>

int main() {
    int m, n;
    int i, j;

    printf("Linhas: ");
    scanf("%d", &m);

    printf("Colunas: ");
    scanf("%d", &n);

    int A[m][n];
    int T[n][m];

    // Leitura
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Transposta
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Exibir
    printf("\nMatriz Transposta:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
