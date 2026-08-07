#include <stdio.h>

int main() {
    char genero, olhos, cabelo;
    int idade;

    int menorIdade = 0;
    int cont1 = 0;
    int cont2 = 0;

    for (int i = 0; i < 50; i++) {

        printf("Genero (M/F): ");
        scanf(" %c", &genero);

        printf("Olhos (A/V/P/C): ");
        scanf(" %c", &olhos);

        printf("Cabelo (L/C/P): ");
        scanf(" %c", &cabelo);

        printf("Idade: ");
        scanf("%d", &idade);

        if (i == 0)
            menorIdade = idade;

        if (idade < menorIdade)
            menorIdade = idade;

        if (genero == 'm' && idade >= 16 && idade <= 24 &&
            olhos == 'a' && cabelo == 'c') {
            cont1++;
        }

        if (genero == 'f' && idade < 40 &&
            olhos == 'p' && cabelo == 'p') {
            cont2++;
        }
    }

    printf("Menor idade: %d\n", menorIdade);
    printf("Homens perfil 1: %d\n", cont1);
    printf("Mulheres perfil 2: %d\n", cont2);

    return 0;
}
