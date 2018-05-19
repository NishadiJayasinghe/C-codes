#include<stdio.h>
#include<string.h>

int main(){
	char charArr[5];
	int i;

	strcpy(charArr, "abcde");
	printf("Length of char array:%d\n\n",strlen(charArr));
	for(i=0;i<strlen(charArr);i++)
		printf("%c",charArr[i]);

	return 0;
}
