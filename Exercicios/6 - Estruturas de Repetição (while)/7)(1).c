#include <stdio.h>

int main(int argc, char **argv)
{
    int termo = 0;      
    int razao = 3;      
    int i = 1;          
    int total_termos = 20;

    printf("Progressao Aritmetica com %d termos e razao %d:\n", total_termos, razao);

    while (i <= total_termos) {
        printf("%d ", termo);  
        termo += razao;        
        i++;
    }

    printf("\n");
	return 0;
}

