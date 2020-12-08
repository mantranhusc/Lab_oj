//Tam giac Floyd

#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		m = i;
		while(m>0){
			if(m%2) printf("1");
			else printf("0");
			m--;
		}
		printf("\n");
	}
	return 0;
}
