#include <stdio.h>

int main(){
	int num,remainder;
	printf("Enter an integer:");
	scanf("%d",&num);

	//remainder = num % 2;
	
	if((num % 2) == 1){
		printf("%d is an odd number\n", num);
		//printf("\nbelongs to if");
	}
	else{
		printf("%d is an even number\n", num);
	}
	
	return 0;
}
