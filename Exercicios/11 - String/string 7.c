#include <stdio.h>
#include <string.h>

int main() {

    // Declaração das strings
    char string1[50];
    char string2[50];

    // Entrada da primeira string
    printf("Digite a primeira string: ");
    scanf("%s", string1);

    // Entrada da segunda string
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    // Compara as duas strings
    if(strcmp(string1, string2) == 0) {

        // Executa se forem iguais
        printf("As strings são iguais\n");

    } else {

        // Executa se forem diferentes
        printf("As strings são diferentes\n");
    }

    return 0;
}