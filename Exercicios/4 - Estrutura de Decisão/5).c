#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 10 && num < 100){
        printf("Numero esta entre 10 e 100 - intervalo permitido");
    }

    return 0;
}