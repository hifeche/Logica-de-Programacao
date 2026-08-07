#include <stdio.h>

// Função que calcula a área do retângulo
float areaRetangulo(float base, float altura)
{
    // Fórmula: base * altura
    return base * altura;
}

int main()
{
    float base, altura;

    // Recebe os valores da base e altura
    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    // Exibe a área calculada
    printf("Area = %.2f", areaRetangulo(base, altura));

    return 0;
}