//Doi sang he nhi phan

#include <stdio.h>
int main()
{
	int n, m, i=0;
	scanf("%d",&n);
	m = n;
	while(m/2>0){
		i++;
		m = m/2;
	}
	while(i>=0){
		m = n;
		for(int j=0; j<i; j++)
			m = m/2;
		printf("%d",m%2);
		i--;
	}
	return 0;
}
/*
 //==================================
 //Doi thanh so kha lon neu so n lon
 
 #include <stdio.h>
int main (){
	long long n,a,b=1,c=0;
	scanf ("%lld",&n);
	do{
		a=n%2;
		c=c+(b*a);
		n=n/2;
		b=b*10;
	}while (n>0);
	printf ("%lld",c);
	return 0;
}
//==================================
 */
 /*
 #include <stdio.h>

void XuatHe2(long n){
    if (n<=1)
        printf("%d",n);
    else {
        XuatHe2(n/2);
        printf("%d",n%2);
    }
}

int main() {
    long n;
    scanf("%ld", &n);
    XuatHe2(n);
}
*/
