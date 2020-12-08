//So sieu may man co so luong cac chu so 4 va 7 bang nhau
//VD: 4747, 47, 7447


#include <stdio.h>

long long n,s;
void tim_so(long long x, int d4, int d7) {
	if((x>=n)&&(d4==d7)&&((x<s)||(s==0)))
		s = x;
	if(x<100*n) {
		tim_so(x*10+4,d4+1,d7);
		tim_so(x*10+7,d4,d7+1);
	}
}
void main() {
	int T;
	scanf("%d",&T);
	for(int i=0; i<T; i++) {
		scanf("%lli",&n);
		tim_so(0,0,0);
		if(n==0) s=47;
		printf("%lli\n",s);
	}
}

