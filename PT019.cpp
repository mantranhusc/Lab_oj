#include <stdio.h>

int main()
{
	long long n;
	int dem = 0;
	scanf("%lli",&n);
	while(n!=0) {
		if((n%10)%2) dem+=1;
		n = n/10;
	}
	printf("%d",dem);
	return 0;
}
