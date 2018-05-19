#include<stdio.h>

struct fraction{
	int denominator;
	int numerator;
};

int main(){
	struct fraction f1,f2;
	f1.numerator = 22;
	f1.denominator = 7;
	f2.numerator =5;
	f2.denominator =6;

	printf("\npi=%d",f1.numerator);
	printf("/%d\n",f1.denominator);
	printf("\nf2=%d",f2.numerator);
	printf("/%d\n",f2.denominator);
	return 0;
}
