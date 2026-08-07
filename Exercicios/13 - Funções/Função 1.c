#include <stdio.h>

// Função que calcula a soma dos n primeiros números naturais
int somaNaturais(int n)
{
    // Fórmula da soma: n * (n + 1) / 2
    return n * (n + 1) / 2;
}

int main()
{
    int n;

    // Solicita um valor para o usuário
    printf("Digite um numero: ");
    scanf("%d", &n);

    // Exibe o resultado retornado pela função
    printf("Soma = %d", somaNaturais(n));

    return 0;
}