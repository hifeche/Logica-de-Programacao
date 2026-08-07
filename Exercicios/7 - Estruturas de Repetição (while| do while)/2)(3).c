#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 1, b = 1, c;
    int i;

    printf("%d\n%d\n", a, b);

    for (i = 3; i <= 15; i++) {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
	return 0;
}

