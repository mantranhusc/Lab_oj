//Tong binh phuong khoang cach giua cac cap diem (x,y)

#include <stdio.h>
#include <stdlib.h>

unsigned long long square1(int a[], int b[], int n){
	unsigned long long r = 0;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++)
			r = r + (a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
	}
	return r;
}
unsigned long long square2(int a[], int n){
	unsigned long long s = 0;
	unsigned long long r = 0;
	for(int i=0; i<n; i++) {
		s = s + a[i];
		r = r + (n+1)*a[i]*a[i] - 2*a[i]*s;
		//printf("s[%d]=%d\n",i, s);
		//printf("r[%d]=%d\n",i, r);
		//printf("================\n");
	}
	return r;
}
int main(){
	
	int N; 
	unsigned long long x, y;
	unsigned long long s1 = 0, s2 = 0;
	unsigned long long  t1,t2;
	unsigned long long r1=0, r2=0, t;
	//scanf("%d",&N);
	N = 100;
	int a[N], b[N];
	for(int i=0; i<N; i++){
		a[i]=rand(); //printf("a[%d]=%d\n",i, a[i]);
		b[i]=rand(); //printf("b[%d]=%d\n",i, b[i]);
	}
	
	for(int i=0; i<N; i++) {
		//scanf("%d%d",&x,&y);
		x = a[i]; y=b[i];
		s1 = s1 + x;
		r1 = r1 + (N+1)*x*x - 2*x*s1;
		s2 = s2 + y;
		r2 = r2 + (N+1)*y*y - 2*y*s2;
		printf("s1=%lli, r1=%lli\n",s1,r1);
		printf("================================\n");
	}
	t = r1 + r2;
	printf("t=%lli, r1=%lli, r2=%lli\n",t,r1,r2);
	t1 = square1(a,b,N);
	printf("t1=%lli\n",t1);
	t2=square2(a,N)+square2(b,N);
	printf("t2=%lli, r1=%lli, r2=%lli\n",t2,square2(a,N),square2(b,N));
	return 0;
}




/*
unsigned long long square(int a[], int n){
	long long s = 0;
	unsigned long long r = 0;
	for(int i=0; i<n; i++) {
		s = s + a[i];
		r = r + (n+1)*a[i]*a[i] - 2*a[i]*s;
	}
	return r;
}

int main()
{
	int N;
	scanf("%d",&N);
	int x[N], y[N];
	long double t;
	for(int i=0; i<N; i++) {
		scanf("%d%d",&x[i],&y[i]);
	}
	t = square(x,N) + square(y,N);
	printf("%.lf",(double)t);
	return 0;
}
*/

