#include<stdio.h>

int main(){
	int x = 0, y = 10;

	while(x < 10){
		//printf("Loop");
		if(y < 4){
			break;
		}
		else{
			if(x % 2 == 0){
				x++;
				continue;
			}
			else{
				//x++;
				printf("%d",x);
				x++;
			}
		}
		
		printf("\ny:%d",y);
		y=y-3;
	}
	return 0;
}
