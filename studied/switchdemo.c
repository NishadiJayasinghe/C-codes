#include <stdio.h>

int main(){
	char choice;
	printf("Choose language\n1.Sinhala\n2.Tamil\n3.English\n");
	scanf("%c",&choice);

	switch(choice){
		case '1':
			printf("\nLanguage:Sinhala");
		break;
		case '2':
			printf("\nLanguage:Tamil");
		break;
		case '3':
			printf("\nLanguage:English");
		break;
		default:
			printf("\nIncorrect choice");

	}	
	return 0;
}
