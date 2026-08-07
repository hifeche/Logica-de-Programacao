#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	int n1, n2, n3;
	float media;
	
	printf("Digite a primeira nota: ");
	scanf("%d", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%d", &n2);
	
	printf("Digite a terceira nota: ");
	scanf("%d", &n3);
	
	media = (float)(n1 + n2 + n3) /3;
	
	printf("Media aritmetica:%.2f\n", media);
	
	return 0;
}

