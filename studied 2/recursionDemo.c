#include<stdio.h>

int main(){
	printf("Repitition: 4!=%d\n",calFactRep(4));
	printf("Recursion: 4!=%d\n",calFactRec(4));
	return 0;
}

int calFactRep(int n){
	int fact=1,i;

	for(i=1;i<=n;i++){
		fact = fact * i;
	}
	return fact;

}

int calFactRec(int n){

	if(n==1)
		return 1;
	else
		return n * calFactRec(n-1);

}
