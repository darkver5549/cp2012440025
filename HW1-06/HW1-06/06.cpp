#include<stdio.h>

void main(){
	int a,b,num;
	printf("Enter a two digit number: ");
	scanf("%d",&num);

	a=num/10;
	b=num%10;

	num=10*b+a;

	printf("%d",num);

}