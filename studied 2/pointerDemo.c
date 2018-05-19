#include<stdio.h>

int main(){
	
	int a = 10;
	int *intPtr = &a;

	printf("a:%d\n*intPtr:%d",a,*intPtr);

	*intPtr = 20;

	printf("\na:%d\n*intPtr:%d",a,*intPtr);

	a = 30;

	printf("\na:%d\n*intPtr:%d\n",a,*intPtr);

	return 0;
}
