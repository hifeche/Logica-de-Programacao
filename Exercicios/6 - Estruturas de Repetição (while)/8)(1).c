#include <stdio.h>

int main(int argc, char **argv)
{
	int termo = -2;      
    int razao = -2;      
    int i = 1;          
    int total_termos = 10;

    printf("Progressao Geometica com %d termos e razao %d:\n", total_termos, razao);

    while (i <= total_termos) {
        printf("%d ", termo);  
        termo *= razao;        
        i++;
    }

    printf("\n");
	return 0;
}

