#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 3 == 0){
        printf("E multiplo de 3");
    } else {
        printf("Nao e multiplo de 3");
    }

    return 0;
}