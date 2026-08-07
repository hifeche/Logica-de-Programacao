#include <stdio.h>
#include <string.h>

int main() {

    // Vetor para armazenar o texto
    char texto[100];

    // Variável de controle
    int i;

    // Entrada da palavra
    printf("Digite uma palavra: ");
    scanf("%s", texto);

    // Mostra mensagem
    printf("Invertida: ");

    // Percorre a string de trás para frente
    for(i = strlen(texto) - 1; i >= 0; i--) {

        // Mostra cada caractere invertido
        printf("%c", texto[i]);
    }

    return 0;
}