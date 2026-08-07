#include <stdio.h>

int main() {
    int i, idade, maior, menor;
    char sexo;

    int somaM = 0, contM = 0;
    int contH = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite idade: ");
        scanf("%d", &idade);

        printf("Digite sexo (m/f): ");
        scanf(" %c", &sexo);

        if (i == 0) {
            maior = idade;
            menor = idade;
        }

        if (idade > maior) maior = idade;
        if (idade < menor) menor = idade;

        if (sexo == 'f') {
            somaM += idade;
            contM++;
        }

        if (sexo == 'm') {
            contH++;
        }
    }

    printf("Maior idade: %d\n", maior);
    printf("Menor idade: %d\n", menor);

    if (contM > 0)
        printf("Media mulheres: %.2f\n", (float)somaM / contM);
    else
        printf("Sem mulheres\n");

    printf("Numero de homens: %d\n", contH);

    return 0;
}
