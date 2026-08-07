#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a+b > c && a+c > b && b+c > a){

        if(a == b && b == c){
            printf("Triangulo equilatero");
        }
        else if(a == b || a == c || b == c){
            printf("Triangulo isosceles");
        }
        else{
            printf("Triangulo escaleno");
        }

    } else {
        printf("Nao forma um triangulo");
    }

    return 0;
}