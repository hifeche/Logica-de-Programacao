#include <stdio.h>

#define PI 3.14159

// Função para calcular área da circunferência
float areaCircunferencia(float raio)
{
    return PI * raio * raio;
}

// Função para calcular área do retângulo
float areaRetangulo(float base, float altura)
{
    return base * altura;
}

// Função para calcular área do triângulo
float areaTriangulo(float base, float altura)
{
    return (base * altura) / 2;
}

int main()
{
    int opcao;

    // Variáveis que serão utilizadas nos cálculos
    float raio, base, altura;

    // Exibe o menu de opções
    printf("\n=== CALCULO DE AREAS ===\n");
    printf("1 - Circunferencia\n");
    printf("2 - Retangulo\n");
    printf("3 - Triangulo\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Verifica a opção escolhida
    switch(opcao)
    {
        case 1:

            // Solicita o raio
            printf("Digite o raio: ");
            scanf("%f", &raio);

            // Chama a função da circunferência
            printf("Area = %.2f",
                   areaCircunferencia(raio));
            break;

        case 2:

            // Solicita base e altura
            printf("Digite a base: ");
            scanf("%f", &base);

            printf("Digite a altura: ");
            scanf("%f", &altura);

            // Chama a função do retângulo
            printf("Area = %.2f",
                   areaRetangulo(base, altura));
            break;

        case 3:

            // Solicita base e altura
            printf("Digite a base: ");
            scanf("%f", &base);

            printf("Digite a altura: ");
            scanf("%f", &altura);

            // Chama a função do triângulo
            printf("Area = %.2f",
                   areaTriangulo(base, altura));
            break;

        default:

            // Caso o usuário digite uma opção inválida
            printf("Opcao invalida!");
    }

    return 0;
}