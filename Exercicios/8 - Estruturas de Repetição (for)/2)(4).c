#include <stdio.h>

int main(int argc, char **argv)
{
	float valor, max, min, soma = 0;
    int count = 0;

    for(int i = 0; i < 30; i++) {
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if(i == 0) {
            max = min = valor;
        }

        if(valor > max) max = valor;
        if(valor < min) min = valor;

        if(valor > 5.9) {
            soma += valor;
            count++;
        }
    }

    printf("Valor maximo: %.2f\n", max);
    printf("Valor minimo: %.2f\n", min);

    if(count > 0){
        printf("Media dos valores maiores que 5.9: %.2f\n", soma / count);
    }else{
        printf("Nenhum valor maior que 5.9 foi informado.\n");
	}
	return 0;
}

