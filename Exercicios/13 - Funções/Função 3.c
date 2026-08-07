#include <stdio.h>

#define PI 3.14159

// Função que calcula a área da circunferência
float areaCircunferencia(float raio)
{
    // Fórmula: PI * raio²
    return PI * raio * raio;
}

int main()
{
    float raio;

    // Solicita o raio
    printf("Digite o raio: ");
    scanf("%f", &raio);

    // Mostra a área calculada
    printf("Area = %.2f", areaCircunferencia(raio));

    return 0;
}