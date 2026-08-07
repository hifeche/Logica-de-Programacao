#include <stdio.h>

int main() {
    int m, n;
    int i, j;

    printf("Numero de linhas: ");
    scanf("%d", &m);

    printf("Numero de colunas: ");
    scanf("%d", &n);

    int A[m][n], B[m][n], C[m][n];

    // Leitura A
    printf("\nMatriz A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Leitura B
    printf("\nMatriz B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Soma
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Exibir C
    printf("\nMatriz C:\n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
