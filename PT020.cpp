#include <stdio.h>

int main()
{
	int n, dem = 0, t;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		t = 0;
		int m = i;
		while(m>0){
			t+=m%10;
			m=m/10;
		}
		if(t%10 == 9) dem+=1;
	}
	printf("%d",dem);
}
