#include <stdio.h>

int main(){
	int x=15, y=20;
/*
	if(x<10){
		if(y>2){
			printf("x<10 and y>2");
		}
		else{
			printf("Only x<10");
		}
	}
	else{
		printf("x>=10");
	}
*/
	int max = (x>y)?x:y;
	printf("Max %d",max);
}
