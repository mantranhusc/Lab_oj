#include <stdio.h>
#include<limits.h> // for int,char macros 
#include<float.h> // for float,double macros 
 
 
int main(){
	bool b;
    char c;
    short s;
    int i;
    unsigned int ui;
    float f;
    double d;
    long l;
    unsigned long long ll;
    long double ld;
 
 
    // sizeof
    printf("bool:\t %5d\n", sizeof(b));
	printf("char:\t %5d\n", sizeof(c));
    printf("short:\t %5d\n", sizeof(s));
    printf("int:\t %5d\n", sizeof(i));
    printf("u int:\t %5d\n", sizeof(ui));
    printf("float:\t %5d\n", sizeof(f));
    printf("double:\t %5d\n", sizeof(d));
    printf("long:\t %5d\n", sizeof(l));
    printf("long long: %3d\n", sizeof(ll));
    printf("long double: %ld\n", sizeof(ld));
    printf("==============================\n");
 
    // Get min_val and max_val of data_type
    printf("char: %10d -> %d\n", CHAR_MIN, CHAR_MAX);
    printf("int: %10d -> %10d\n", INT_MIN, INT_MAX);
    printf("unsigned int:  0 -> %10lli\n", UINT_MAX);
}
