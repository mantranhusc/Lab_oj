#include <stdio.h>
#include <math.h>

int main()
{
	const float pi = 3.14159;
	float a, b, alpha;
	scanf("%f%f%f",&a,&b,&alpha);
	printf("%.4f",(a*b*sin(alpha*pi/180))/2);
	return 0;
}

