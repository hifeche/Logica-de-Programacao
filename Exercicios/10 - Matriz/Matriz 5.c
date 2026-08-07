#include <stdio.h>

#define TAM 5   
// Define uma constante chamada TAM com valor 5.
// Ela será usada para criar a matriz 5x5.

int main() {

    int m[TAM][TAM];  
    // Declara uma matriz inteira 5x5.

    int i, j;         
    // Variáveis usadas nos laços de repetição.

    int opcao;        
    // Guarda a opção escolhida no menu.

    int soma;         
    // Guarda a soma da diagonal principal.

    int x;            
    // Valor que o usuário deseja buscar na matriz.

    int encontrado;   
    // Variável usada para verificar se o valor foi encontrado.

    //Leitura da Matriz
    
    printf("Digite os elementos da matriz:\n");

    for(i = 0; i < TAM; i++) {
        // Percorre as linhas da matriz

        for(j = 0; j < TAM; j++) {
            // Percorre as colunas da matriz

            printf("m[%d][%d]: ", i, j);

            scanf("%d", &m[i][j]);
            // Armazena o valor digitado na posição da matriz
        }
    }

    do {


        printf("1 - Mostrar matriz\n");
        // Mostra todos os elementos da matriz

        printf("2 - Mostrar quarta linha e primeira coluna\n");
        // Mostra a linha 4 e a coluna 1

        printf("3 - Soma da diagonal principal\n");
        // Soma os elementos da diagonal principal

        printf("4 - Trocar negativos fora da diagonal por 0\n");
        // Troca números negativos fora da diagonal por zero

        printf("5 - Buscar valor na matriz\n");
        // Procura um número dentro da matriz

        printf("0 - Sair\n");
        // Encerra o programa

        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            // Opção 1

            case 1:

                printf("\nMatriz:\n");

                for(i = 0; i < TAM; i++) {

                    for(j = 0; j < TAM; j++) {

                        printf("%4d", m[i][j]);
                        // Mostra cada elemento da matriz
                    }

                    printf("\n");
                    // Quebra linha após terminar cada linha
                }

                break;

            // Opção 2

            case 2:

                printf("\nQuarta linha:\n");

                for(j = 0; j < TAM; j++) {

                    printf("%4d", m[3][j]);
                    // Mostra os elementos da quarta linha
                    // Linha 4 = índice 3
                }

                printf("\n\nPrimeira coluna:\n");

                for(i = 0; i < TAM; i++) {

                    printf("%4d\n", m[i][0]);
                    // Mostra os elementos da primeira coluna
                    // Coluna 1 = índice 0
                }

                break;

            // Opção 3

            case 3:

                soma = 0;
                // Inicializa a soma

                for(i = 0; i < TAM; i++) {

                    soma += m[i][i];
                    // Soma os elementos da diagonal principal
                    // Exemplo: m[0][0], m[1][1], m[2][2]
                }

                printf("\nSoma da diagonal principal: %d\n", soma);

                break;

            // Opção 4

            case 4:

                for(i = 0; i < TAM; i++) {

                    for(j = 0; j < TAM; j++) {

                        if(i != j && m[i][j] < 0) {
                            // Verifica se o elemento:
                            // 1) Está fora da diagonal principal
                            // 2) É negativo

                            m[i][j] = 0;
                            // Substitui por zero
                        }

                    }
                }

                printf("\nMatriz alterada:\n");

                for(i = 0; i < TAM; i++) {

                    for(j = 0; j < TAM; j++) {

                        printf("%4d", m[i][j]);
                        // Mostra a matriz atualizada
                    }

                    printf("\n");
                }

                break;

            // Opção 5 

            case 5:

                printf("\nDigite o valor a buscar: ");
                scanf("%d", &x);

                encontrado = 0;
                // Inicialmente considera que o valor não foi encontrado

                for(i = 0; i < TAM; i++) {

                    for(j = 0; j < TAM; j++) {

                        if(m[i][j] == x) {
                            // Verifica se o elemento é igual ao valor buscado

                            printf("Encontrado na linha %d e coluna %d\n", i, j);

                            encontrado = 1;
                            // Marca que encontrou o valor
                        }

                    }
                }

                if(encontrado == 0) {

                    printf("Nao encontrado!\n");
                    // Mensagem caso o valor não exista
                }

                break;

            // Opção 0 -> ENCERRAR

            case 0:

                printf("\nPrograma encerrado!\n");

                break;

            // Opção inválida

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 0);
    // Repete o menu até o usuário escolher 0

    return 0;
    // Finaliza o programa
}