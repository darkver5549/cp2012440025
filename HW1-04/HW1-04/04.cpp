#include<stdio.h>

void main(){
	int a;

	scanf ("%d",&a);
	
	if(a>=80)
		printf("A");
	else if(a>=60)
		printf("B");
	else if(a>=40)
		printf("C");
	else if(a>=20)
		printf("D");
	else if(a>=0)
		printf("E");

}