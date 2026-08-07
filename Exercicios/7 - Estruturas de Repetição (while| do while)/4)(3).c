#include <stdio.h>

int main() {
    int idade;
    char gostou, recomendou;

    int total = 0, votos = 0, recomendacoes = 0;

    while (1) {
        printf("Digite a idade (0 para parar): ");
        scanf("%d", &idade);

        if (idade == 0)
            break;

        printf("Gostou do filme? (s/n): ");
        scanf(" %c", &gostou);

        printf("Recomendaria? (s/n): ");
        scanf(" %c", &recomendou);

        total++;

        if (gostou == 's')
            votos++;

        if (recomendou == 's')
            recomendacoes++;
    }

    printf("Espectadores: %d\n", total);
    printf("Votos positivos: %d\n", votos);
    printf("Recomendacoes: %d\n", recomendacoes);

    return 0;
}
