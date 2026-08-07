#include <stdio.h>
#include <string.h>

int main() {

    // Declaração das strings
    char string1[50];
    char string2[50];
    char string3[100];

    // Entrada da primeira string
    printf("Digite a primeira string: ");
    scanf("%s", string1);

    // Entrada da segunda string
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    // Copia string1 para string3
    strcpy(string3, string1);

    // Adiciona um espaço em string3
    strcat(string3, " ");

    // Junta string2 no final de string3
    strcat(string3, string2);

    // Exibe a string concatenada
    printf("String concatenada: %s\n", string3);

    // Mostra o tamanho das strings
    printf("Tamanho string1: %d\n", strlen(string1));
    printf("Tamanho string2: %d\n", strlen(string2));
    printf("Tamanho string3: %d\n", strlen(string3));

    return 0;
}