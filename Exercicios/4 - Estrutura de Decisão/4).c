#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num >= 0){
        printf("Raiz quadrada: %.2f", sqrt(num));
    } else {
        printf("Numero ao cubo: %.2f", pow(num,3));
    }

    return 0;
}