#include <stdio.h>

int main()
{
	int N, a, dem = 0;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&a);
		switch(a%19){
			case 0:
			case 3:
			case 6:
			case 9:
			case 11:
			case 14:
			case 17: dem+=1; break;
		}
	}
	printf("%d",dem);
	return 0;
}
