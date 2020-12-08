//Nam nhuan la nam chia het cho 400
//Nam nhuan chia het cho 4 nhung ko chia het cho 100

#include <stdio.h>
int main()
{
	char T;
	int n;
	scanf("%d",&T);
	for(int i=0; i<T; i++){
		scanf("%d",&n);
		if((n%400==0) || (n%4==0 && n%100 !=0))
			printf("leap year\n");
		else printf("none\n");
	}
	return 0;
}
