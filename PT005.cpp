#include<stdio.h>
int main(){
	unsigned int N;
	scanf("%d",&N);
	if(N/365 != 0)
		printf("%d years\n",N/365);
	if((N%365)/30 != 0)
		printf("%d months\n",(N%365)/30);
	if((N%365)%30 !=0)
		printf("%d days",(N%365)%30);
	return 0;
}
/*
#include <iostream>
using namespace std;
int main() {
  int num, year, month, day;
  cin>>num;
  year = num / 365;
  month = (num % 365) / 30;
  day = (num % 365) % 30;
  if (year > 0)
    cout<<year<<" years"<<endl;
  if (month > 0)
    cout<<month<<" months"<<endl;
  if (day > 0)
    cout<<day<<" days";
}
*/
