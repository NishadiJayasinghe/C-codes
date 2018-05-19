#include<stdio.h>

int main(){
	int marks[5]={91,82,76,99,84};
	int i,mark,sum=0,max;
	float average;
	//marks[4] = 76;

	//printf("%d",marks[4]);
/*
	for(i=0;i<5;i++){
		printf("Enter a mark:");
		scanf("%d",&mark);
		marks[i]=mark;
	}
*/
	//for(i=0;i<=5;i++)
	//	printf("\n%d",marks[i]);
	max=marks[0];
	for(i=1;i<5;i++){
		if(max<marks[i])
			max=marks[i];
	}
	printf("\n\nMax:%d",max);

	for(i=0;i<5;i++){
		sum+=marks[i];
	}
	average = (float)sum/5;

	printf("\n\nAverage:%.2f",average);
	return 0;
}
