#include<stdio.h>

int main(){
	int x = 0, count = 0, sum = 0;
	float average;

	do{
		printf("Enter marks:");
		scanf("%d",&x);
		if((x>=0) && (x<=100)){
			count++;
			sum += x;
		}
		
		//x += 1;
	}while(count<3);

	average = (float)sum / count;

	printf("\nSum %d.\n",sum);
	printf("\nCount %d.\n",count);
	printf("\nAverage %.2f.\n",average);
	return 0;
}
