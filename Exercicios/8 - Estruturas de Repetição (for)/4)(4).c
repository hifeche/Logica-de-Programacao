#include <stdio.h>

int main(int argc, char **argv)
{
	float A = 0.0;
    int numerador = 1;

    for(int denominador = 1; denominador <= 25; denominador++) {
        A += (float)numerador / denominador;
        numerador += 2; 
    }

    printf("Valor de A = %.6f\n", A);
    
	return 0;
}

