#include <stdio.h>

int main() {
    char sexo, resp;
    int idade;
    float peso;

    int maiorMulher = 0;
    int menorHomem = 0;
    float maiorPeso = 0, menorPeso = 0;

    int primeiro = 1;

    do {
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Peso: ");
        scanf("%f", &peso);

        if (primeiro) {
            maiorPeso = peso;
            menorPeso = peso;
            primeiro = 0;
        }

        if (peso > maiorPeso) maiorPeso = peso;
        if (peso < menorPeso) menorPeso = peso;

        if (sexo == 'f') {
            if (idade > maiorMulher)
                maiorMulher = idade;
        }

        if (sexo == 'm') {
            if (idade < menorHomem || menorHomem == 0)
                menorHomem = idade;
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &resp);

    } while (resp == 's');

    printf("Maior idade mulher: %d\n", maiorMulher);
    printf("Menor idade homem: %d\n", menorHomem);
    printf("Maior peso: %.2f\n", maiorPeso);
    printf("Menor peso: %.2f\n", menorPeso);

    return 0;
}
