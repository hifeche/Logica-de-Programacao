#include <stdio.h>

int main(int argc, char **argv)
{
		int i = 0, num;
		int soma = 0, contador = 0;
		float media;
		
		printf("Digite 15 numeros\n");
		printf("Vou calcular numeros maiores que 10\n");
		while (i < 15){
			scanf("%d", &num);
			
			if (num > 10){
				soma += num;
				contador++;
				}
			i++;
			}
		if (contador > 0) {
			media = (float)soma / contador;
			printf("Media dos numeros maiores que 10: %.2f\n", media);
    } else {
        printf("Nenhum numero maior que 10 foi digitado.\n");
    }
	return 0;
}

