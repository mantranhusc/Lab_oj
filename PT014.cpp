#include <stdio.h>

int main()
{
	int n;
	double t = 1;
	scanf("%d",&n);
	if(n==0 || n==1) printf("1");
	else{
		for(int i=1; i<=n; i+=2)
		{
			if(n%2==0) t = t*(i+1);
			else t = t*i;
		}
		printf("%.lf",t);
	}
	return 0;
}
