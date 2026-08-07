#include <stdio.h>

int main()
{
	float celsius, kelvin, fahrenheit;

    printf("Escala de Temperaturas\n");

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273;
    fahrenheit = 1.8 * (kelvin - 273) + 32;

    printf("%.1fC = %.1fF = %.1fK\n", celsius, fahrenheit, kelvin);

	return 0;
}

