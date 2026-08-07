#include <stdio.h>

int main() {
    char estado;

    printf("Digite o estado civil (S/C/D/V): ");
    scanf(" %c", &estado);

    if(estado == 'S' || estado == 's'){
        printf("Solteiro");
    } else if(estado == 'C' || estado == 'c'){
        printf("Casado");
    } else if(estado == 'D' || estado == 'd'){
        printf("Divorciado");
    } else if(estado == 'V' || estado == 'v'){
        printf("Viuvo");
    } else {
        printf("Opcao invalida");
    }

    return 0;
}