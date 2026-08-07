#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i;

    printf("Digite o numero (n): ");
    scanf("%d", &n);

    printf("Digite a quantidade de iteracoes (i): ");
    scanf("%d", &i);

    for(int j = 1; j <= i; j++) {
        printf("%d x %d = %d\n", n, j, n * j);
    }
	return 0;
}

