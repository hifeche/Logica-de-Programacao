#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d;
	float MH, MQ;
	
	printf("Digite quatro valores reais:\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    MH = 4 / ( (1/a) + (1/b) + (1/c) + (1/d) );
    
    MQ = sqrt( (a*a + b*b + c*c + d*d) / 4 );
    
    printf("Media Harmonico (MH): %.2f\n", MH);
    printf("Media Quadratica (MQ): %.2f\n", MQ);
	
	return 0;
}

