#include <stdio.h>

int main(int argc, char **argv)
{
	int inicio, final;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);

    printf("Digite o valor final: ");
    scanf("%d", &final);

    while (inicio <= final) {
        printf("%d\n", inicio);
        inicio++;
    }
	return 0;
}

