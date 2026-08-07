#include <stdio.h>

int main(){
	float reais, dolar, cotaçao;
	
	printf("Digite o valor em dolar: ");
	scanf("%f", &dolar);
	printf("Digite o valor da cotaçao: ");
	scanf("%f", &cotaçao);
	
	reais = dolar * cotaçao;
	
	printf("Em reais: %.2f", reais);
	
return 0;
}

