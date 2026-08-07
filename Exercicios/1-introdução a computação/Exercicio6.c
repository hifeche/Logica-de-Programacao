#include <stdio.h>

int main()
{
	float bits, bits_segundo, tempo;
	printf("Digite o tamanho do arquivo em bits: ");
	scanf("%f", &bits);
	
	printf("Digite a velocidade da coneçao em bits por segundo: ");
	scanf("%f", &bits_segundo);
	
	tempo= bits / bits_segundo;
	
	printf("tempo necessario para dowload: %.2f segundos\n", tempo); 
	
	return 0;
}

