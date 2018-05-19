#include<stdio.h>

int main(){
	int num1=3, num2=4, result;
	int numArray[5] = {1, 2, 3, 4, 5};
	int numArr2[3] = {10, 20, 30};
/*
	result = add(2,4);
	printf("\nResult is %d",result);
	result = add(num1, num2);
	printf("\nResult is %d",result);
*/
	//result = twice(num1);
	//printf("\nResult is %d",twice(num1));
	//printf("\nResult is %d",num1);
	//swap(&num1, &num2);
	//printf("\nnum1 %d \t num2 %d",num1,num2);
	display(numArray,5);
	numArray[3] = 10;
	display(numArray,5);
	display(numArr2, 3);
	return 0;
}
void display(int array[], int size){
	int i;
	for(i=0;i<size;i++)
		printf("%d, ",array[i]);
}

void swap(int *num1, int *num2){

	int temp;
	printf("\nnum1 %d \t num2 %d",*num1,*num2);
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	printf("\nnum1 %d \t num2 %d",*num1,*num2);
}

int add(int a, int b){
	//int result = a + b;
	//printf("\nResult is %d",result);
	return a+b;	
}

int twice(int num1){
	return num1*2;

}
