#include <stdio.h>

int main(int argc, char **argv)
{
    int n = 6;     
    int i = 1;      

    printf("Tabuada de %d:\n", n);

    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

	return 0;
}

