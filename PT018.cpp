#include <stdio.h>

int main()
{
	long long n;
	int dem = 0;
	scanf("%lli",&n);
	do {
		if((n%10)%2==0) dem+=1;
		n = n/10;
	} while(n!=0);
	printf("%d",dem);
	return 0;
}
