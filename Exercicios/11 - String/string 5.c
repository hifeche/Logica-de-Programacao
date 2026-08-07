#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    // Vetor para armazenar o texto
    char texto[100];

    // Variável de controle
    int i;

    // Entrada do texto
    printf("Digite uma palavra: ");
    fgets(texto, 100, stdin);

    // Percorre todos os caracteres da string
    for(i = 0; texto[i] != '\0'; i++) {

        // Converte cada caractere para maiúsculo
        texto[i] = toupper(texto[i]);
    }

    // Exibe o texto convertido
    printf("Maiúsculo: %s\n", texto);

    return 0;
}