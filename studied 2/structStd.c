#include<stdio.h>
#include<string.h>

struct student{
	char examNum[6];
	char grades[5];
};


int main(){
	struct student std[5];
	int i;

	strcpy(std[0].examNum,"EP1901");
	std[0].grades[0]='A';
	std[0].grades[1]='B';
	std[0].grades[2]='A';
	std[0].grades[3]='C';
	std[0].grades[4]='B';

	printf("Student exam number:");
	for(i=0;i<6;i++)
		printf("%c",std[0].examNum[i]);

	printf("\nGrades");
	for(i=0;i<5;i++)
		printf("\nSubject%d=%c",i+1,std[0].grades[i]);
	return 0;
}
