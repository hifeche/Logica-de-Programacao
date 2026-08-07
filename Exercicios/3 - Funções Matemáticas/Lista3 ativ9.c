#include <stdio.h>
#include <math.h>

int main()
{
	int v1, v2, aux;
	
	printf("Digite o valor de v1: ");
	scanf("%d", &v1);
	
	printf("Digite o valor de v2: ");
    scanf("%d", &v2);

    printf("\nValores iniciais:\n");
    printf("v1 = %d\n", v1);
    printf("v2 = %d\n", v2);
    
    aux = v1;
    v1 = v2;
    v2 = aux;
    
    printf("\nValores apos a troca:\n");
    printf("v1 = %d\n", v1);
    printf("v2 = %d\n", v2);
	
	return 0;
}

