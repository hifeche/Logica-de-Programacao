#include <stdio.h>

int main() {
    float a, b, media;
    char resp;

    do {
        printf("Digite a nota A: ");
        scanf("%f", &a);

        printf("Digite a nota B: ");
        scanf("%f", &b);

        media = (a * 1 + b * 2) / 3;

        printf("Media do aluno: %.2f\n", media);

        do {
            printf("Existem mais alunos? (s/n): ");
            scanf(" %c", &resp);

            if (resp != 's' && resp != 'n') {
                printf("Resposta invalida!\n");
            }

        } while (resp != 's' && resp != 'n');

    } while (resp == 's');

    return 0;
}
