#include <stdio.h>

int main() {

    int n, i, j;

    // Quantidade de alunos
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    // Matriz para armazenar as 4 notas dos alunos
    float notas[n][4];

    // Vetor para armazenar a média de cada aluno
    float media[n];

    float somaMedia = 0;
    float mediaGeral;

    //Leitura das notas

    for(i = 0; i < n; i++) {

        printf("\nAluno %d\n", i + 1);

        for(j = 0; j < 4; j++) {

            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            // Guarda cada nota na matriz
        }
    }

    //Calculando a média

    for(i = 0; i < n; i++) {

        media[i] = 0;
        // Inicializa a média do aluno

        for(j = 0; j < 4; j++) {

            media[i] += notas[i][j];
            // Soma as 4 notas do aluno
        }

        media[i] = media[i] / 4;
        // Divide por 4 para calcular a média

        somaMedia += media[i];
        // Soma as médias dos alunos
    }

    //Média geral dos Alunos

    mediaGeral = somaMedia / n;


    // Exibição dos resultados

    printf("\n");

    printf("ALUNO  NOTA1  NOTA2  NOTA3  NOTA4  MEDIA\n");

    for(i = 0; i < n; i++) {

        printf("%d", i + 1);

        for(j = 0; j < 4; j++) {

            printf("%8.1f", notas[i][j]);
            // Mostra as notas do aluno
        }

        printf("%8.1f\n", media[i]);
        // Mostra a média do aluno
    }

    printf("\nMEDIA GERAL.......................: %.1f\n", mediaGeral);

    return 0;
}