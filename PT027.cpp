#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

int main(){
	int N, t, dem=0;
	char s[20];
	scanf("%d",&N);
	for(int i=0; i<N; i++) {
		fflush(stdin);
		gets(s);
		t = atoi(s);
		if(t==0) {
			for (int i = 0; i <strlen(s); i++){
				s[i] = toupper(s[i]);
			};
			//puts(s);
			if (strcmp(s,"ABSINTH")==0 || strcmp(s,"BEER")==0 || strcmp(s,"BRANDY")==0 ||
				strcmp(s,"CHAMPAGNE")==0 || strcmp(s,"GIN")==0 || strcmp(s,"RUM")==0 ||
				strcmp(s,"SAKE")==0 || strcmp(s,"TEQUILA")==0 || strcmp(s,"VODKA")==0 ||
				strcmp(s,"WHISKEY")==0 || strcmp(s,"WINE")==0) dem++;
		}
		else if((t>=1 && t<=100) && (t<16 || t==17))
			dem++;
	}
	printf("%d",dem);
}
