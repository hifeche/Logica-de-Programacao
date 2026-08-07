#include <stdio.h>

int main() {
    char genero;
    float peso, altura, imc;

    printf("Genero (M/F): ");
    scanf(" %c", &genero);

    printf("Peso: ");
    scanf("%f", &peso);

    printf("Altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if(genero == 'F' || genero == 'f'){

        if(imc < 19)
            printf("Abaixo do peso");
        else if(imc <= 23.9)
            printf("Normal");
        else if(imc <= 28.9)
            printf("Obesidade leve");
        else if(imc <= 38.9)
            printf("Obesidade moderada");
        else
            printf("Obesidade morbida");

    } else {

        if(imc < 20)
            printf("Abaixo do peso");
        else if(imc <= 24.9)
            printf("Normal");
        else if(imc <= 29.9)
            printf("Obesidade leve");
        else if(imc <= 39.9)
            printf("Obesidade moderada");
        else
            printf("Obesidade morbida");
    }

    return 0;
}