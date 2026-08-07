#include <stdio.h>

int main(int argc, char **argv)
{
	int codigo;
    float nota;

    int contA = 0, contB = 0, contC = 0, contD = 0, contE = 0;
    float somaA = 0, somaB = 0, somaC = 0, somaD = 0, somaE = 0;

    for(int i = 0; i < 40; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &codigo);

        printf("Nota: ");
        scanf("%f", &nota);

        if(nota >= 0.0 && nota <= 2.9) {
            contE++;
            somaE += nota;
        } else if(nota <= 4.9) {
            contD++;
            somaD += nota;
        } else if(nota <= 6.9) {
            contC++;
            somaC += nota;
        } else if(nota <= 8.9) {
            contB++;
            somaB += nota;
        } else if(nota <= 10.0) {
            contA++;
            somaA += nota;
        } else {
            printf("Nota invalida!\n");
            i--;
        }
    }

    printf("\n--- RESULTADOS ---\n");

    printf("A: %d alunos", contA);
    if(contA > 0){ 
		printf(" | Media: %.2f\n", somaA / contA);
    }else{ 
		printf("\n");
	}

    printf("B: %d alunos", contB);
    if(contB > 0){
		printf(" | Media: %.2f\n", somaB / contB);
    }else{
		printf("\n");
	}
    printf("C: %d alunos", contC);
    if(contC > 0){ 
		printf(" | Media: %.2f\n", somaC / contC);
    }else{
		printf("\n");
	}

    printf("D: %d alunos", contD);
    if(contD > 0){
		printf(" | Media: %.2f\n", somaD / contD);
    }else{
		printf("\n");
	}

    printf("E: %d alunos", contE);
    if(contE > 0){
		printf(" | Media: %.2f\n", somaE / contE);
    }else{
		printf("\n");
	}
	return 0;
}

