#include <stdio.h>

int main(){
	int marks;
	char grade;

	scanf("%d",&marks);
	if((marks>=80) && (marks<=100)){
		grade='A';
	}
	else if((marks<=79) && (marks>=60)){
		grade='B';
	}
	else if((marks<=59) && (marks>=50)){
		grade='C';
	}
	else{
		grade='D';
	}
	printf("%c",grade);
	return 0;
}
