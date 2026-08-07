#include <stdio.h>

int main(int argc, char **argv)
{
	int inicio, fim;

    int positivos = 0, pares = 0, impares = 0, imparesDiv = 0;
    int somaPos = 0, somaPar = 0, somaImp = 0, somaImpDiv = 0;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);

    printf("Digite o valor final: ");
    scanf("%d", &fim);

    for(int i = inicio; i <= fim; i++) {

        if(i > 0) {
            positivos++;
            somaPos += i;
        }

        if(i % 2 == 0) {
            pares++;
            somaPar += i;
        } else {
            impares++;
            somaImp += i;

            if(i % 3 == 0 && i % 4 == 0) {
                imparesDiv++;
                somaImpDiv += i;
            }
        }
    }

    printf("\nQuantidade de positivos: %d\n", positivos);
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
    printf("Impares divisiveis por 3 e 4: %d\n", imparesDiv);

    if(positivos > 0){
        printf("Media positivos: %.2f\n", (float)somaPos / positivos);
	}
    if(pares > 0){
        printf("Media pares: %.2f\n", (float)somaPar / pares);
	}
    if(impares > 0){
        printf("Media impares: %.2f\n", (float)somaImp / impares);
	}
    if(imparesDiv > 0){
        printf("Media impares divisiveis por 3 e 4: %.2f\n", (float)somaImpDiv / imparesDiv);
	}
	return 0;
}

