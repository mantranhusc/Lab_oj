#include <stdio.h>

int main()
{
	long N;
	int a, dem = 0;
	scanf("%d",&N);
	for(int i=1; i<=N; i++)
	{
		scanf("%d",&a);
		if(a%3==0 || a%7==0)
			dem+=1;
	}
	printf("%d",dem);
	return 0;
}

