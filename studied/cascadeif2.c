#include <stdio.h>

int main(){
	int marks;
	char grade;

	scanf("%d",&marks);
	if(marks>=80){
		grade='A';
	}
	else if(marks>=50){
		grade='C';
	}
	else if(marks>=60){
		grade='B';
	}
	else{
		grade='D';
	}
	printf("%c",grade);
	return 0;
}
