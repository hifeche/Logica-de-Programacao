#include <stdio.h>

int main() {
    char time;
    int atl = 0, cor = 0, foz = 0, total = 0;

    while (1) {
        printf("Digite o time (A/C/F) ou S para sair: ");
        scanf(" %c", &time);

        if (time == 'S' || time == 's') {
            break;
        }

        total++;

        if (time == 'a') atl++;
        else if (time == 'c') cor++;
        else if (time == 'f') foz++;
        else printf("Opcao invalida!\n");
    }

    printf("\nTotal: %d\n", total);

    if (total > 0) {
        printf("Atletico: %.2f%%\n", (atl * 100.0) / total);
        printf("Coritiba: %.2f%%\n", (cor * 100.0) / total);
        printf("Foz: %.2f%%\n", (foz * 100.0) / total);
    }

    return 0;
}
