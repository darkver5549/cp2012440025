#include <stdio.h>
#include <iostream>

int main(){
	int a=0,b=0;

	scanf ("%d %d",&a,&b);

	if (a>=b)
		printf("%d",a);
	else
		printf("%d",b);

	return 0;
}