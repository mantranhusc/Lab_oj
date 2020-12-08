//Tong binh phuong khoang cach giua cac cap diem (x,y)

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int N;
	long long x, y;
	unsigned long long s1=0, s2=0, r1=0, r2=0, t;
	scanf("%d",&N);
	
	for(int i=0; i<N; i++) {
		scanf("%lli%lli",&x,&y);
		s1 = s1 + x;
		r1 = r1 + (N+1)*x*x - 2*x*s1;
		s2 = s2 + y;
		r2 = r2 + (N+1)*y*y - 2*y*s2;
	}
	t = r1 + r2;
	printf("%lli",t);
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin >> n;
	ll a=0,b=0,c=0,d=0,x,y;
	for(int i=0; i<n; i++)
	{
		cin >> x >> y;
		a+=x*x; b+=x;
		c+=y*y; d+=y;
	}
	cout << n*(a+c)-(b*b+d*d);
}
*/
/*
#include<stdio.h>

#define M 1000000007
#define for(n) for(i = 0; i < n; i++)
#define sc(n) scanf("%lld", &n)
#define pr(n) printf("%lld", n)
#define prn(n) printf("%lld\n", n)
typedef long long ll; 

int main()
{
	ll n, i, s, s1, s2, s3, s4;
	s1 = 0;
	s2 = 0;
	s3 = 0;
	s4 = 0;
	sc(n);
	ll a[n], b[n];
	for(n)
	{
		sc(a[i]);
		sc(b[i]);
		s1 = s1 + (a[i] * a[i]);
		s2 = s2 + (b[i] * b[i]);
		s3 = s3 + a[i]; 
		s4 = s4 + b[i];
	}
	s = (n - 1) * (s1 + s2);
	for(n)
	{
		s3 = s3 - a[i];
		s4 = s4 - b[i];
		s = s - 2 * (a[i] * s3 + b[i] * s4);
	}
	pr(s);
	return 0;
}
*/


