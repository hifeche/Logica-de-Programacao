#include <stdio.h>

int main(int argc, char **argv)
{
	int vetorA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, vetorB[10];
	
	for(int i = 0; i <10; i++) {

        if(vetorA[i] % 2 == 0) {
            vetorB[i] = vetorA[i] * 5;
        } else {
            vetorB[i] = vetorA[i] + 5;
        }
    }
	printf("\nVetor final:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetorB[i]);
    }
	
	return 0;
}

