#include <stdio.h>
#include <string.h>

int main() {

    // Vetor para armazenar a frase
    char frase[100];

    // Variável para armazenar o caractere
    char letra;

    // Variáveis de controle
    int i, contador = 0;

    // Entrada da frase
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    // Entrada do caractere
    printf("Digite um caractere: ");
    scanf("%c", &letra);

    // Percorre toda a string
    for(i = 0; frase[i] != '\0'; i++) {

        // Verifica se o caractere da frase é igual ao digitado
        if(frase[i] == letra) {
            contador++;
        }
    }

    // Mostra o total encontrado
    printf("Quantidade: %d\n", contador);

    return 0;
}