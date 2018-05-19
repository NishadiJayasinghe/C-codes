#include<stdio.h>

int main(){
	int i=5,j=2;
	float f=3.19;
	char c;
	i=f;
	printf("i=%d\tf=%f\n",i,f);
	i=65;
	c=(char)i;
	printf("c=%c\n",c);
	f=i/j;
	printf("%f\n",f);
	return 0;
}
