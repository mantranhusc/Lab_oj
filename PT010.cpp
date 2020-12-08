#include <stdio.h>
#include <math.h>
int main()
{
	int T;
	float a1, b1, c1, a2, b2, c2;
	float d, dx, dy;
	scanf("%d",&T);
	for(int i=0; i<T; i++) {
		//fflush(stdin);
		scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
		d = a1*b2-a2*b1;
		dx= c1*b2-c2*b1;
		dy= a1*c2-a2*c1;
		if(d==0){
			if(dx==0 && dy==0) printf("Many solutions\n");
			else printf("No solution\n");
		}
		else printf("%.6f %.6f\n",dx/d, dy/d);
	}
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double a, b, c, a1, b1, c1, D, Dx, Dy, x, y;
    cin>> n;
    while(n--) {
        cin>>a>>b>>c>>a1>>b1>>c1;
        D = a*b1 - a1*b;
        Dx = c*b1 - c1*b;
        Dy = a*c1 - a1*c;
        x = Dx/D; 
        y = Dy/D;
        if(D == 0) {
            if(Dx*Dx + Dy*Dy == 0)
                cout << "Many Solutions \n";
            else 
                cout << "No solution \n";
        }
        else
            cout<< fixed << setprecision(6) << x <<" "<< y<< "\n";
        cout<<endl; // xu?ng dòng
    }
    return 0;
}
*/
