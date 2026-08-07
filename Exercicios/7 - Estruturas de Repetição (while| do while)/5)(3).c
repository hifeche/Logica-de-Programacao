#include <stdio.h>

int main() {
    int n;

    do {
        printf("Digite um numero entre 0 e 10: ");
        scanf("%d", &n);

        if (n < 0 || n > 10) {
            printf("Numero fora do intervalo!\n");
        }
    } while (n >= 0 && n <= 10);

    return 0;
}
