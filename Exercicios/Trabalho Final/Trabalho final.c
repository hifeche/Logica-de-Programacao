#include <stdio.h>
#define TAM 10
#include <stdlib.h>
#include <string.h>

struct Funcionario{
    int cadastro;
    char nome[50];
    int escolaridade;
    int idiomas;
    int cargo;
    float produtividade;
    float salario;
};

/* Salário base conforme o nível */
float salarioBase(int nivel){
    switch(nivel){
        case 1: return 1000.0;
        case 2: return 1500.0;
        case 3: return 2000.0;
        case 4: return 2500.0;
        case 5: return 3000.0;
        default: return 0.0;
    }
}

/* Formação */
int formacao(int escolaridade){
    return escolaridade * 100;
}

/* Idiomas */
int poliglota(int idiomas){
    return idiomas * 100;
}

/* Cadastro */
void cadastrar(struct Funcionario informacao[], int *n){

    int i;

    printf("Quantas pessoas trabalham na empresa? ");
    scanf("%d", n);

    while(*n > TAM || *n <= 0){
        printf("Valor invalido. Digite no maximo %d funcionarios: ", TAM);
        scanf("%d", n);
    }

    getchar();

    for(i = 0; i < *n; i++){

        informacao[i].cadastro = i + 1;

        printf("\nFuncionario %d\n", i + 1);

        printf("Nome: ");
        fgets(informacao[i].nome,50,stdin);
        informacao[i].nome[strcspn(informacao[i].nome,"\n")] = '\0';

        printf("Formacao (1 a 5): ");
        scanf("%d",&informacao[i].escolaridade);
        
        while(informacao[i].escolaridade < 1 || informacao[i].escolaridade > 5){
            printf("Informacao invalida. Digite novamente: ");
            scanf("%d",&informacao[i].escolaridade);
        }
        printf("Poliglota em quantas linguas? ");
        scanf("%d",&informacao[i].idiomas);
        printf("Nivel do cargo (1 a 5): ");
        scanf("%d",&informacao[i].cargo);
       
        while(informacao[i].cargo < 1 || informacao[i].cargo > 5){
            printf("Nivel invalido. Digite novamente: ");
            scanf("%d",&informacao[i].cargo);
        }
        
        printf("Produtividade: ");
        scanf("%f",&informacao[i].produtividade);
        getchar();
    }
}

/* Calcular salários */
void calcularSalarios(struct Funcionario informacao[], int n){

    int i;
    float base;

    for(i = 0; i < n; i++){
        
        base =
            salarioBase(informacao[i].cargo) +
            formacao(informacao[i].escolaridade) +
            poliglota(informacao[i].idiomas);
        if(informacao[i].produtividade > 0.7){
            informacao[i].salario =
                base + (salarioBase(informacao[i].cargo) *
                informacao[i].produtividade);
        }
        else if(informacao[i].produtividade >= 0.4){
            informacao[i].salario = base;
        }
        else{
            informacao[i].salario =
                base -
                (salarioBase(informacao[i].cargo) *
                (0.4 - informacao[i].produtividade));
        }
    }
}

/* Relatório */
void relatorio(struct Funcionario informacao[], int n){

    int i;

    printf("\n===== RELATORIO =====\n");

    for(i=0;i<n;i++){

        printf("\nCadastro: %d\n",informacao[i].cadastro);
        printf("Nome: %s\n",informacao[i].nome);
        printf("Escolaridade: %d\n",informacao[i].escolaridade);
        printf("Idiomas: %d\n",informacao[i].idiomas);
        printf("Nivel: %d\n",informacao[i].cargo);
        printf("Produtividade: %.2f\n",informacao[i].produtividade);
        printf("Salario: %.2f\n",informacao[i].salario);
    }
}

void alterarFuncionario(struct Funcionario informacao[], int n){

    char busca[50];
    int encontrado = 0;
    int i, editar;

    getchar();

    printf("Digite o nome do funcionario: ");
    fgets(busca,50,stdin);
    busca[strcspn(busca,"\n")] = '\0';

    for(i = 0; i < n; i++){

        if(strcmp(informacao[i].nome, busca) == 0){

            encontrado = 1;

            do{

                printf("\n===== EDITAR FUNCIONARIO =====\n");
                printf("1 - Nome\n");
                printf("2 - Escolaridade\n");
                printf("3 - Idiomas\n");
                printf("4 - Nivel\n");
                printf("5 - Produtividade\n");
                printf("0 - Sair\n");
                printf("Opcao: ");
                scanf("%d",&editar);

                getchar();

                switch(editar){

                    case 1:

                        printf("Novo nome: ");
                        fgets(informacao[i].nome,50,stdin);
                        informacao[i].nome[strcspn(informacao[i].nome,"\n")] = '\0';
                        break;

                    case 2:

                        printf("Nova escolaridade: ");
                        scanf("%d",&informacao[i].escolaridade);
                        break;

                    case 3:

                        printf("Nova quantidade de idiomas: ");
                        scanf("%d",&informacao[i].idiomas);
                        break;

                    case 4:

                        printf("Novo nivel: ");
                        scanf("%d",&informacao[i].cargo);
                        break;

                    case 5:

                        printf("Nova produtividade: ");
                        scanf("%f",&informacao[i].produtividade);
                        break;

                    case 0:

                        printf("Saindo da edicao...\n");
                        break;

                    default:

                        printf("Opcao invalida!\n");
                }
            }while(editar != 0);
        }
    }

    if(!encontrado){
        printf("Funcionario nao encontrado.\n");
    }

}

void acimaDaMedia(struct Funcionario informacao[], int n){

    int i;
    float soma = 0, media;

    /* Soma todos os salários */
    for(i = 0; i < n; i++){
        soma += informacao[i].salario;
    }

    /* Calcula a média */
    media = soma / n;

    printf("\n===== FUNCIONARIOS ACIMA DA MEDIA =====\n");
    printf("Media salarial: R$ %.2f\n", media);

    for(i = 0; i < n; i++){

        if(informacao[i].salario > media){

            printf("\nCadastro: %d\n", informacao[i].cadastro);
            printf("Nome: %s\n", informacao[i].nome);
            printf("Salario: R$ %.2f\n", informacao[i].salario);
        }
    }
}

void visualizarFuncionario(struct Funcionario informacao[], int n){

    char busca[50];
    int i;
    int encontrado = 0;

    getchar();

    printf("Digite o nome do funcionario: ");
    fgets(busca, 50, stdin);
    busca[strcspn(busca, "\n")] = '\0';

    for(i = 0; i < n; i++){

        if(strcmp(informacao[i].nome, busca) == 0){

            encontrado = 1;

            printf("\n===== DADOS DO FUNCIONARIO =====\n");
            printf("Cadastro: %d\n", informacao[i].cadastro);
            printf("Nome: %s\n", informacao[i].nome);
            printf("Escolaridade: %d\n", informacao[i].escolaridade);
            printf("Idiomas: %d\n", informacao[i].idiomas);
            printf("Nivel: %d\n", informacao[i].cargo);
            printf("Produtividade: %.2f\n", informacao[i].produtividade);
            printf("Salario: R$ %.2f\n", informacao[i].salario);

            break;
        }

    }

    if(!encontrado){
        printf("Funcionario nao encontrado.\n");
    }

}

int main(){

    struct Funcionario informacao[TAM];

    int n = 0;
    int opcao;

    do{

        printf("\n========== MENU ==========\n");
        printf("1 - Cadastrar funcionarios\n");
        printf("2 - Calcular salarios\n");
        printf("3 - Relatorio\n");
        printf("4 - Funcionarios acima da media\n");
        printf("5 - Alterar funcionario\n");
        printf("6 - Visualizar funcionario\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d",&opcao);

        switch(opcao){

            case 1:
                cadastrar(informacao,&n);
                break;

            case 2:
                calcularSalarios(informacao,n);
                break;

            case 3:
                relatorio(informacao,n);
                break;

            case 4:
                acimaDaMedia(informacao, n);
                break;

            case 5:
                alterarFuncionario(informacao, n);
                break;

            case 6:
                visualizarFuncionario(informacao, n);
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");

        }

    }while(opcao != 0);

    return 0;
}