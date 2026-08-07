#include <stdio.h>

// Função que calcula a área do triângulo
float areaTriangulo(float base, float altura)
{
    // Fórmula: (base * altura) / 2
    return (base * altura) / 2;
}

int main()
{
    float base, altura;

    // Solicita a base e a altura
    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    // Mostra a área calculada
    printf("Area = %.2f", areaTriangulo(base, altura));

    return 0;
}