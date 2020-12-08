#include<stdio.h>


int main(){
	int n, x[100],y[100];
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	long long s=0;
	int kc;
	for(int i =0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			kc = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
			s = s+ kc;
		}
	}
	printf("%lli",s);
}
