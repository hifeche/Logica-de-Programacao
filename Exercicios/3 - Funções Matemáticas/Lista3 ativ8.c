#include <stdio.h>
#include <math.h>

int main()
{
	int segundos, horas, minutos, seg, resto;
	
	printf("Digite o tempo em segundos: ");
	scanf("%d", &segundos);
	
	horas = segundos / 3600;
	resto = segundos % 3600;
	
	minutos = resto / 60;
    seg = resto % 60;

    printf("%ds = %d:%d:%d\n", segundos, horas, minutos, seg);
	
	return 0;
}

