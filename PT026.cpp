//Dau cua tich: ax(a+1)x(a+2)x...xb

#include<stdio.h>
int main() {
	long a, b, t=0;
	scanf("%ld%ld",&a,&b);
	if(b<0) {
		t=b-a+1;
		if(t%2==0) printf("Positive");
		else printf("Negative");
	}
	else if(a>0) printf("Positive");
	else printf("Zero");
	return 0;
}
