#include <stdio.h>

int main() {
    float salario, novo;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario <= 990){
        novo = salario * 1.20;
    } else if(salario <= 1480){
        novo = salario * 1.10;
    } else if(salario <= 2000){
        novo = salario * 1.05;
    } else {
        novo = salario;
    }

    printf("Salario reajustado: %.2f", novo);

    return 0;
}