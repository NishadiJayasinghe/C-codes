#include <stdio.h>

int main(){
	int units,fixed=0;
	float cost=0.0;

	printf("Enter units:");
	scanf("%d",&units);

	if(units>180){
		cost = (units-180)*45 + 60*32 + 30*27.75 + 30*10 + 60*7.85;
		fixed = 540;
	}
	else if(units>120){
		cost = (units-120)*32 + 30*27.75 + 30*10 + 60*7.85;
		fixed = 480;
	}
	else if(units>90){
		cost = (units-90)*27.75 + 30*10 + 60*7.85;
		fixed = 480;
	}
	else if(units>60){
		cost = (units-60)*10 + 60*7.85;
		fixed = 480;
	}
	else{
		cost = units*7.85;
	}

	printf("\n\n####################");
	printf("\nUnits:%d",units);
	printf("\nCost for units:%.2f",cost);
	printf("\nFixed cost:%d",fixed);
	printf("\nTotal:%.2f",cost+fixed);
	printf("\n\n####################");

	return 0;
}
