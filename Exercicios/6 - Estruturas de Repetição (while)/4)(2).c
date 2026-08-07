#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i =1, soma =0, par =0;
	printf("Digite um n: ");
	scanf("%d", &n);
	while(i <= n){
		if (i % 2 != 0){
			soma += i;}
		else {
			par += i;
		}
	i++;
}
	printf("Soma dos numeros impares: %d\n", soma);
	printf("Soma dos numeros pares: %d\n", par);
	return 0;
}

