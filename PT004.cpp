#include<stdio.h>

int main() { 
	int A, B;
	scanf("%d %d",&A,&B);
	if((A*B)%2) printf("Odd");
	else printf("Even");
	return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int main () {
	int a,b;
	cin>>a>>b;
	if((a*b)% 2 == 0) cout<<"Even";
	else cout<<"Odd";
}*/
