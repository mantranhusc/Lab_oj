//So uoc cua n!
//n=(2^a).(3^b).(4^c)... => sum uoc = (a+1)x(b+1)x(c+1)x...

#include <stdio.h>
#include <math.h>

int a[10001];
void dem(int n){
	int i = 2;
	while(i*i<=n){
		while(n%i==0){
			a[i]+=1;
			n /=i;
		}
		i++;
	}
	a[n]+=1;
}

int main() {
	int n;
	long t=1;
	scanf("%d",&n);
	for(int i=2; i<=10001; i++){
		a[i]=1;
	}
	for(int i=2; i<=n; i++){
		dem(i);
	}
	for(int j=2; j<=10001; j++)
		if(a[j]>0) t=t*a[j]%1000000007;
	printf("%ld",t);
}
