#include <stdio.h>
#include <string.h>

int main() {

    // Declaração das strings
    char string1[50] = "lua";
    char string2[50] = "cheia";

    // Junta o conteúdo de string2 no final de string1
    strcat(string1, string2);

    // Mostra o resultado da concatenação
    printf("Após concatenar: %s\n", string1);

    return 0;
}