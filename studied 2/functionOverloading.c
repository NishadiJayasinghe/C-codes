#include<stdio.h>

float add(int a, int b);
float add(int a, int b, int c);
/*float add(int a, float d);
float add(float d, int a);*/

int main(){
	int a=1,b=2,c=3;
	float d=1.1,e=2.2,f=3.3;
	//double g,h,i;
	
	printf("%.2f\n",add(a,b));
	printf("%.2f\n",add(a,b,c));
	//printf("%.2f\n",add(a,d));
	//printf("%.2f\n",add(d,a));
	return 0;
}

float add(int a, int b){
	return (float)(a+b);
}

float add(int a, int b, int c){
	return (float)(a+b+c);
}
/*
float add(int a,float d){
	return (float)(a+d);
}

float add(float d, int a){
	return (float)(d+a);
}
*/
