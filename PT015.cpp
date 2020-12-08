#include <stdio.h>

int main()
{
	int T, n;
	scanf("%d",&T);
	for(int i=0; i<T; i++)
	{
		scanf("%d",&n);
		for(int j=1; j<2*n; j++)
		{
			if(j<=n){
				for(int k=0; k<j; k++){
					printf("* ");
				}
			}
			else{
				for(int k=2*n-j; k>0; k--){
					printf("* ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
