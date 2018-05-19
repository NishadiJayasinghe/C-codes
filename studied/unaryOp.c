#include<stdio.h>

int main(){
	int i=1;
	int j;
	j=i++;
	printf("i:%d\tj:%d",i,j);
	j=++i;
	printf("i:%d\tj:%d",i,j);
	return 0;
}
