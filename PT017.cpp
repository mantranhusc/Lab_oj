#include <stdio.h>

int main()
{
	int N, A, B, m, sum, t;
	scanf("%d",&N);
	scanf("%d%d",&A,&B);
	sum = 0;
	for(int i=1; i<=N; i++){
		m = i;
		t = 0;
		while(m>0) {
			t+=m%10;
			m = m/10;
		}
		if(t>=A && t<=B) sum+=i;
	}
	printf("%d",sum);
	return 0;
}
