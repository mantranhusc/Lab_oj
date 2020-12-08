#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	double d;
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(a!=0){
		if(d<0) printf("No solution");
		else if(d==0) printf("%.4f",-b/(2*a));
    	else{
    		printf("%.4f\n",(-b+sqrt(d))/(2*a));
	  		printf("%.4f",(-b-sqrt(d))/(2*a));
    	}
	}
	return 0;
}
