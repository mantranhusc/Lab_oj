#include <stdio.h>

int main()
{
	long long n, m;
	int tong, T;
	scanf("%d",&T);
	for(int i=0; i<T; i++){
		scanf("%lld",&n);
		if(n>=0) m = n;
		else m = -n;
		tong = 0;
		while(m!=0){
			if((m%10)%2==0) tong+= m%10;
			m/= 10;
		}
		printf("%d\n",tong);
	}
	return 0;
}
