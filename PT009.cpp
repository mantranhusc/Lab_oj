#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	double p, dt;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && c+b>a){
		p=(a+b+c)/2;
		dt=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.6f",dt);
	}
	else printf("No Solution");
	return 0;
}
/*#include <iostream>
#include <math.h> 
#include <bits/stdc++.h> 
using namespace std; 
int main()
{ 
    double a, b, c, p, S; 
	cin >> a >> b >> c; 
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
      cout<<setprecision(6)<<fixed<<S;
	}
	else {
		cout <<"No Solution";
	} 
	return 0;
}*/
