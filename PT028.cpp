//So Ugly: cac uoc chi la 2, 3, 5

#include<stdio.h>

int main() {
	int n, m, kt;
	scanf("%d",&n);
	if(n==1) printf("YES");
	else if(n>1) {
		kt = 1;
		m = n;
		while(m>1) {
			if(m%2==0) m/=2;
			else if(m%3==0) m/=3;
			else if(m%5==0) m/=5;
			else {
				kt = 0;
				break;
			}
		}
		if(kt) printf("YES");
		else printf("NO");
	}
}

/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n % 5 == 0) {
        n = n / 5;
    }
    while (n % 3 == 0) {
        n = n / 3;
    }
    while (n % 2 == 0) {
        n = n / 2;
    }
    if (n == 1) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}

*/
