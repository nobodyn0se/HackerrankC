#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int sum1, a,b,d1;
    float sum2, c,d,d2;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    sum1 = a+b;
    sum2 = c+d;
    d1 = a-b;
    d2 = c-d;
    printf("%d %d\n",sum1,d1);
    printf("%.1f %.1f",sum2,d2);
    return 0;
}

