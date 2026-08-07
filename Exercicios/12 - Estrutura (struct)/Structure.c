#include <stdio.h>
#define TAM 100
#include <stdio_ext.h>

int main(int argc, char **argv)
{
	struct Tpessoa{			//Estrutura
		
		int codigo;		//<====================>
		char nome[50];
		char genero[50];		//Variaveis
		int idade;
		float altura;
		float peso;		//<====================>
		};
		
	struct Tpessoa cadastro[TAM];
	int n, i, a;
	
	printf("Quantas pessoas dejeja cadastrar?");
		scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
	cadastro[i].codigo = i+1;
	
	printf("Nome: ");
	__fpurge(stdin);
		fgets(cadastro[i].nome, 50, stdin);
	printf("Genero: ");
	__fpurge(stdin);
		fgets(cadastro[i].genero, 50, stdin);
	printf("Idade: ");
		scanf("%d", &cadastro[i].idade);
	printf("Altura: ");
		scanf("%f", &cadastro[i].altura);
	printf("Peso: ");
		scanf("%f", &cadastro[i].peso);
	}
	
	printf("\nQual cadastro voce deseja visualizar? ");
	scanf("%d", &a);
	
	printf("\n--- Verificação ---\n");
	
    printf("Codigo: %d\n", cadastro[a-1].codigo);
    printf("Nome: %s", cadastro[a-1].nome);
    printf("Genero: %s", cadastro[a-1].genero);
    printf("Idade: %d\n", cadastro[a-1].idade);
    printf("Altura: %.2f\n", cadastro[a-1].altura);
    printf("Peso: %.3f\n", cadastro[a-1].peso);
    
    
    int alterar;
    
    printf("\n--- Em caso de erro digite 0 ---\n");
    scanf("%d", &alterar);
    
    if(alterar == 0){

    int codigoAlterar;
    int opcaoEditar;

    printf("Digite o codigo do cadastro que deseja alterar: ");
    scanf("%d", &codigoAlterar);

    if(codigoAlterar >= 1 && codigoAlterar <= n){

        do{

            printf("\n--- MENU DE EDICAO ---\n");
            printf("1 - Nome\n");
            printf("2 - Genero\n");
            printf("3 - Idade\n");
            printf("4 - Altura\n");
            printf("5 - Peso\n");
            printf("0 - Sair\n");
            printf("Opcao: ");
            scanf("%d", &opcaoEditar);

            switch(opcaoEditar){

                case 1:
                    printf("Novo nome: ");
                    __fpurge(stdin);
                    fgets(cadastro[codigoAlterar-1].nome, 50, stdin);
                    break;

                case 2:
                    printf("Novo genero: ");
                    __fpurge(stdin);
                    fgets(cadastro[codigoAlterar-1].genero, 50, stdin);
                    break;

                case 3:
                    printf("Nova idade: ");
                    scanf("%d", &cadastro[codigoAlterar-1].idade);
                    break;

                case 4:
                    printf("Nova altura: ");
                    scanf("%f", &cadastro[codigoAlterar-1].altura);
                    break;

                case 5:
                    printf("Novo peso: ");
                    scanf("%f", &cadastro[codigoAlterar-1].peso);
                    break;

                case 0:
                    printf("Saindo da edicao...\n");
                    break;

                default:
                    printf("Opcao invalida!\n");
            }

        }while(opcaoEditar != 0);

            printf("\n--- DADOS ATUALIZADOS ---\n");
            printf("Codigo: %d\n", cadastro[codigoAlterar-1].codigo);
            printf("Nome: %s", cadastro[codigoAlterar-1].nome);
            printf("Genero: %s", cadastro[codigoAlterar-1].genero);
            printf("Idade: %d\n", cadastro[codigoAlterar-1].idade);
            printf("Altura: %.2f\n", cadastro[codigoAlterar-1].altura);
            printf("Peso: %.2f\n", cadastro[codigoAlterar-1].peso);

        }else{
            printf("Codigo invalido!\n");
        }
    }
    
   
   int opcao;

    printf("\n--- Caso deseje excluir um cadastro digite 9 ---\n");
    scanf("%d", &opcao);

    if(opcao == 9){

        int excluir;
    
        printf("Qual cadastro deseja excluir: ");
        scanf("%d", &excluir);

        if(excluir >= 1 && excluir <= n){
    
            for(i = excluir - 1; i < n - 1; i++){
                cadastro[i] = cadastro[i + 1];
            }
    
            n--;
    
            for(i = 0; i < n; i++){
                cadastro[i].codigo = i + 1;
            }
    
            printf("Cadastro excluido com sucesso!\n");
    
        } else {
            printf("Codigo invalido!\n");
        }
    }
    printf("\n--- LISTA DE CADASTROS ---\n");

    for(i = 0; i < n; i++){
        printf("\nCadastro %d\n", i + 1);
        printf("Codigo: %d\n", cadastro[i].codigo);
        printf("Nome: %s", cadastro[i].nome);
        printf("Genero: %s", cadastro[i].genero);
        printf("Idade: %d\n", cadastro[i].idade);
        printf("Altura: %.2f\n", cadastro[i].altura);
        printf("Peso: %.2f\n", cadastro[i].peso);
        printf("-------------------------\n");
    }
	return 0;
}