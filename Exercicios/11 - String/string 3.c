#include <stdio.h>
#include <string.h>

int main() {

    // Vetor para armazenar a frase
    char frase[100];

    // Variáveis de controle
    int i, contador = 0;

    // Entrada da frase
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    // Percorre toda a string
    for(i = 0; frase[i] != '\0'; i++) {

        // Verifica se o caractere é 'o'
        if(frase[i] == 'o') {
            contador++;
        }
    }

    // Mostra a quantidade encontrada
    printf("Quantidade de 'o': %d\n", contador);

    return 0;
}