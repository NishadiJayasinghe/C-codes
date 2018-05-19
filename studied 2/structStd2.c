#include<stdio.h>
#include<string.h>

typedef struct{
	char coursecode[7];
	int credits;
	char grade[2];
	
}course;

typedef struct{
	char examNum[6];
	course c1;//course c[6];
}student;



int main(){
	student std[5];
	int i;

	strcpy(std[0].examNum,"EP1901");
	strcpy(std[0].c1.coursecode,"IS11321");
	std[0].c1.credits=3;
	strcpy(std[0].c1.grade,"A-");

	printf("Student exam number:");
	for(i=0;i<6;i++)
		printf("%c",std[0].examNum[i]);
	printf("\nCoursecode:");
	for(i=0;i<7;i++)
		printf("%c",std[0].c1.coursecode[i]);

	printf("\nCredits:%d",std[0].c1.credits);
	printf("\nGrade:%c%c",std[0].c1.grade[0],std[0].c1.grade[1]);
	return 0;
}
