#include<stdio.h>

int main(){
	int x;	
	for(x=0;x<5;x++){
		if(x==3)
			break;
		else
			printf("%d",x);
	}
	return 0;
}
